#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void swap(void* a, void* b, size_t size) {
    unsigned char *x = a;
    unsigned char *y = b;
    for (size_t i = 0; i < size; i++) {
        unsigned char temp = x[i];
        x[i] = y[i];
        y[i] = temp;
    }    
}

bool comparator(int* a, int* b) {return *b < *a;}

int* bubble_sort(int* array, int num)
{   
    if (num < 2) {return array;};
    
    while (true) {
        bool repeat = false;
        for (int i = 0; i<num-1; i++) {
            if (comparator(&array[i], &array[i+1])) { 
                repeat = true;
                swap(&array[i], &array[i+1], sizeof array[i]);
            };
        };
        if (repeat == false) {break;};
    }

    return array;
}
