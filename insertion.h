#ifndef INSERTION_H_INCLUDED
#define INSERTION_H_INCLUDED

using namespace std;

void insertion_sort(int *data,size_t length){
    int valueToInsert,
        holePosition;

    for(size_t i = 1 ; i++ < length ;){
        valueToInsert = data[i - 1],
        holePosition  = i - 1;

        while(holePosition > 0 && data[holePosition - 1] > valueToInsert){
            data[holePosition] = data[holePosition - 1];
            holePosition--;
        }
        data[holePosition] = valueToInsert;
    }
}

#endif // INSERTION_H_INCLUDED
