#include <iostream>
#include <ctime>

using namespace std;
void bubble_sort_1(int *number_array, size_t length){
    int temp;
    for(size_t i = 0 ; i++ < length ; ) {
        for(size_t j = 0 ; j++ < length; ){
            if(number_array[j-1] > number_array[j]){
                    temp = number_array[j-1];
                    number_array[j-1] = number_array[j];
                    number_array[j] = temp;
            }
        }
    }
}

void bubble_sort_2(int *number_array, size_t length){
    int temp;
    size_t bound = length - 1, new_bound = 0;
    for(size_t i = 0 ; i < length - 1 ; i++) {
        for(size_t j = 0 ; j++ < bound; ){
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

void bubble_sort_3(int *number_array, size_t length){
    int temp;
    for(size_t i = 0 ; i < length ; i++) {
        for(size_t j = 0 ; j++ < (length - i ) - 1; ){
            if(number_array[j-1] > number_array[j]){
                    temp = number_array[j-1];
                    number_array[j-1] = number_array[j];
                    number_array[j] = temp;
            }
        }
    }
}

void display(int *number_array,size_t length){
    int col = 0;
    for(size_t i = 0; i++ < length;col++){
        cout << number_array[i-1];
        if(i < length)
            std::cout.width(5);
        if(col == 20){ col = 0; cout << endl; }
    }
}

