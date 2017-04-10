// By           : Asep Nur Muhammad
// Name Program : All Sorting sort

#include <iostream>
#include <time.h>
#include "data.h"

#include "bubble.h"
#include "selection.h"
#include "insertion.h"
#include "count.h"
#include "radix.h"

#include "display_array.h"

using namespace std;
const size_t LENGTH = 1000;
const size_t LENGTH_COUNT = 5000;

int main()
{
    clock_t t1,t2;
    double   diff;
    int     number_array[LENGTH],
            input_counting[LENGTH_COUNT];
    setData(number_array,LENGTH);
    radix_sort(number_array, LENGTH);
    display(number_array,LENGTH);


    //1a. <!-- Set Unordered Data" -->
    setDataCounting(input_counting,LENGTH_COUNT);

    //1b. <!-- Process Insertion Sort-->
    t1 = clock();
    count_sort(input_counting,LENGTH_COUNT);
    t2 = clock();
    diff = (double)(t2-t1)/CLOCKS_PER_SEC;

    //1c. <!-- Display Information Counting Sort -->
    information(diff, LENGTH_COUNT, "Counting Sort");
    //display(input_counting, LENGTH_COUNT);

    //2a. <!-- Set Unordered Data" -->
    setData(number_array,1000);

    //2b. <!-- Process Insertion Sort-->
    t1 = clock();
    selection_sort(number_array, LENGTH);
    t2 = clock();
    diff = (float)(t2-t1)/CLOCKS_PER_SEC;

    //2c. <!-- Display Information Insertion Sort -->
    information(diff, LENGTH, "Insertion Sort");

    //3a. <!-- Set Unordered Data" -->
    setData(number_array,1000);

    //3b. <!-- Process Selection Sort-->
    t1 = clock();
    insertion_sort(number_array, LENGTH);
    t2 = clock();
    diff = (float)(t2-t1)/CLOCKS_PER_SEC;

    //3c. <!-- Display Information Selection Sort -->
    information(diff, LENGTH, "Selection Sort");

    //3a. <!-- Set Unordered Data" -->
    setData(number_array,1000);

    //3b. <!-- Process Bubble Sort-->
    t1 = clock();
    bubble_sort_2(number_array, LENGTH);
    t2 = clock();
    diff = (float)(t2-t1)/CLOCKS_PER_SEC;

    //3c. <!-- Display Information Bubble Sort -->
    information(diff, LENGTH, "Bubble Sort");
}
