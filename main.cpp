// By           : Asep Nur Muhammad
// Name Program : bubble sort
#include <iostream>
#include "bubble.h"


int main()
{
    int number_array[] = {4,2,3,1};
    int length = (sizeof number_array / sizeof* number_array);
    std::cout << "Bubble Sort Program "<< std::endl;
    std::cout << "Not Ordered Number : " ;
    display(number_array,length);
    std::cout<< std::endl;
    bubble_sort_2(number_array, length);
    std::cout << "Not Ordered Number : ";
    display(number_array,length);
}

