#ifndef COUNT_H_INCLUDED
#define COUNT_H_INCLUDED
#include "display_array.h"

const int LENGTH_BUCKET = 10;
using namespace std;

void count_sort(int *data, size_t length){
    int bucket[LENGTH_BUCKET] = {0};
    int output = 0;
    for(size_t i = 0; i++ < length;){
        bucket[data[i - 1]]++;
    }
    for(size_t i = 0; i++ < LENGTH_BUCKET; ){
        while(bucket[i - 1]--){
            data[output++] = i - 1;
        }
    }
}


#endif // COUNT_H_INCLUDED
