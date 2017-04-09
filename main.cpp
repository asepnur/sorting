// By           : Asep Nur Muhammad
// Name Program : bubble sort
#include <iostream>
#include "bubble.h"
#include "data.h"
#include <time.h>

using namespace std;

int main()
{
    clock_t t1,t2;
    int number_array[1000];
    int length = (sizeof number_array / sizeof* number_array);
    setData(number_array,1000);
    cout << length << endl;
    cout << "Bubble Sort Program "<< endl;
    t1 = clock();
    bubble_sort_2(number_array, length);
    t2 = clock();
    float diff = (float)(t2-t1)/CLOCKS_PER_SEC;
    cout << "Ordered Number : " << endl;
    display(number_array,length);
    cout << endl << "Process time : " << diff;
    cout << endl << "Total Data   : " << length;
}
