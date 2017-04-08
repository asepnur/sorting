#include <iostream>

void bubble_sort_1(int *number_array, std::size_t length){
    int temp;
    for(std::size_t i = 0 ; i++ < length ; ) {
        for(std::size_t j = 0 ; j++ < length; ){
            if(number_array[j-1] > number_array[j]){
                    temp = number_array[j-1];
                    number_array[j-1] = number_array[j];
                    number_array[j] = temp;
            }
        }
    }
}

void bubble_sort_2(int *number_array, std::size_t length){
    int temp,bound = length - 1, new_bound = 0;
    for(std::size_t i = 0 ; i < length - 1 ; i++) {
        for(std::size_t j = 0 ; j++ < bound; ){
            if(number_array[j-1] > number_array[j]){
                    temp = number_array[j-1];
                    number_array[j-1] = number_array[j];
                    number_array[j] = temp;
                    new_bound = j;
            }
        }
        bound = new_bound;
    }
}

void bubble_sort_3(int *number_array, std::size_t length){
    int temp;
    for(std::size_t i = 0 ; i < length ; i++) {
        for(std::size_t j = 0 ; j++ < (length - i ) - 1; ){
            if(number_array[j-1] > number_array[j]){
                    temp = number_array[j-1];
                    number_array[j-1] = number_array[j];
                    number_array[j] = temp;
            }
        }
    }
}

void display(int *number_array,std::size_t length){
    for(std::size_t i = 0; i++ < length;){
        std::cout << number_array[i-1];
        if(i < length - 1)
            std::cout << ", ";
    }

}

