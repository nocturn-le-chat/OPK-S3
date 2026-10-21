#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


void swap(void* a, void* b, size_t el_size) {
    unsigned char *x = a;
    unsigned char *y = b;
    for (size_t i = 0; i < el_size; i++) {
        unsigned char temp = x[i];
        x[i] = y[i];
        y[i] = temp;
    }    
}

//bool comparator(int* a, int* b) {return *b < *a;}

void* bubble_sort(void* array, int len, size_t el_size)
{   
    if (len < 2) {return array;};

    while (true) {
        bool repeat = false;
        for (int i = 0; i<len-1; i++) {
            unsigned char* first = (unsigned char *)array + i*el_size;
            unsigned char* second = (unsigned char *)array + (i+1)*el_size;

            if (memcmp(first, second, el_size)!=0) {
                repeat = true;
                swap(first, second, el_size);
            };
        };
        if (repeat == false) {break;};
    }

    return array;
}
