// By           : Asep Nur Muhammad
// Name Program : bubble sort
#include <iostream>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"
#include "data.h"
#include <time.h>
#include "display_array.h"

using namespace std;

int main()
{
    clock_t t1,t2;
    float   diff;
    int     n_index = 1000;
    int     number_array[n_index];
    int     length  = (sizeof number_array / sizeof* number_array);
    setData(number_array,1000);


    //<!-- Process Insertion Sort-->
    //
    t1 = clock();
    selection_sort(number_array, length);
    t2 = clock();
    diff = (float)(t2-t1)/CLOCKS_PER_SEC;

    //<!-- Display Information Insertion Sort -->
    //
    cout << endl << "Algorithm    : Insertion Sort";
    cout << endl << "Process time : " << diff;
    cout << endl << "Total Data   : " << length;
    cout << endl << "Ordered Number : " << endl;
    cout.width(5);
    display(number_array,length);

    //<!-- Process Selection Sort-->
    //
    setData(number_array,1000);
    t1 = clock();
    insertion_sort(number_array, length);
    t2 = clock();
    diff = (float)(t2-t1)/CLOCKS_PER_SEC;

    //<!-- Display Information Selection Sort -->
    //
    cout << endl << "Algorithm    : Selection Sort";
    cout << endl << "Process time : " << diff;
    cout << endl << "Total Data   : " << length;
    cout << endl << "Ordered Number : " << endl;
    cout.width(5);
    display(number_array,length);


    setData(number_array,1000);
    //<!-- Process Bubble Sort-->
    //
    t1 = clock();
    bubble_sort_2(number_array, length);
    t2 = clock();
    diff = (float)(t2-t1)/CLOCKS_PER_SEC;

    //<!-- Display Information Bubble Sort -->
    //
    cout << endl << "Algorithm    : Bubble Sort";
    cout << endl << "Process time : " << diff;
    cout << endl << "Total Data   : " << length;
    cout << endl << "Ordered Number : " << endl;
    cout.width(5);
    display(number_array,length);
}
