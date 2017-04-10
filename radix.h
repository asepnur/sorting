#ifndef RADIX_H_INCLUDED
#define RADIX_H_INCLUDED

void radix_sort(int *data, size_t length){
    int maxNumber   = data[0],
        exp         = 1,
        *buffer = new int[length];
    for (int i = 1; i < length; i++)
        if (data[i] > maxNumber) maxNumber = data[i];

    while (maxNumber / exp > 0){
        int bucket[10] = {  0 };

        for (int i = 0; i++ < length; )
          bucket[data[i - 1] / exp % 10]++;

        for (int i = 1; i++ < 10; )
          bucket[i - 1] += bucket[i - 2];

        for (int i = length - 1; i-- >= 0; )
          buffer[--bucket[data[i + 1] / exp % 10]] = data[i + 1];

        for (int i = 0; i++ < length; )
          data[i - 1] = buffer[i - 1];

        exp *= 10;
    }
}

#endif // RADIX_H_INCLUDED
