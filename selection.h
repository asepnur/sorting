#ifndef SELECTION_H_INCLUDED
#define SELECTION_H_INCLUDED

void selection_sort(int *data, size_t length){
    size_t min_index = 0,
        temp      = 0;

    for(size_t i = 0 ; i++ < length - 1;){
        min_index = i - 1;

        for(size_t j = i; j++ < length;){
            if(data[j - 1] < data[min_index]){
                min_index = j - 1;
            }
        }
        if(min_index != i - 1){
            temp            = data[min_index];
            data[min_index] = data[i - 1];
            data[i - 1]         = temp;
        }
    }
}

#endif // SELECTION_H_INCLUDED
