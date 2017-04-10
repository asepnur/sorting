// By           : Asep Nur Muhammad
// Name Program : bubble sort
#include <iostream>
#include <time.h>
#include "data.h"

#include "bubble.h"
#include "selection.h"
#include "insertion.h"
#include "count.h"

#include "display_array.h"

using namespace std;
const size_t LENGTH = 1000;
const size_t LENGTH_COUNT = 5000;

int main()
{
    clock_t t1,t2;
    float   diff;
    int     number_array[LENGTH],
            input_counting[LENGTH_COUNT];
    setDataCounting(input_counting,LENGTH_COUNT);

    //count_sort(number_array,LENGTH_COUNT);
//    //<!-- Process Insertion Sort-->
//    //
//    t1 = clock();
//    selection_sort(number_array, length);
//    t2 = clock();
//    diff = (float)(t2-t1)/CLOCKS_PER_SEC;
//
//    //<!-- Display Information Insertion Sort -->
//    //
//    cout << endl << "Algorithm    : Insertion Sort";
//    cout << endl << "Process time : " << diff;
//    cout << endl << "Total Data   : " << length;
//    cout << endl << "Ordered Number : " << endl;
//    cout.width(5);
//    display(number_array,length);
//
//    //<!-- Process Selection Sort-->
//    //
//    setData(number_array,1000);
//    t1 = clock();
//    insertion_sort(number_array, length);
//    t2 = clock();
//    diff = (float)(t2-t1)/CLOCKS_PER_SEC;
//
//    //<!-- Display Information Selection Sort -->
//    //
//    cout << endl << "Algorithm    : Selection Sort";
//    cout << endl << "Process time : " << diff;
//    cout << endl << "Total Data   : " << length;
//    cout << endl << "Ordered Number : " << endl;
//    cout.width(5);
//    display(number_array,length);
//
//
//    setData(number_array,1000);
//    //<!-- Process Bubble Sort-->
//    //
//    t1 = clock();
//    bubble_sort_2(number_array, length);
//    t2 = clock();
//    diff = (float)(t2-t1)/CLOCKS_PER_SEC;
//
//    //<!-- Display Information Bubble Sort -->
//    //
//    cout << endl << "Algorithm    : Bubble Sort";
//    cout << endl << "Process time : " << diff;
//    cout << endl << "Total Data   : " << length;
//    cout << endl << "Ordered Number : " << endl;
//    cout.width(5);
//    display(number_array,length);
}
