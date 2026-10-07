#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void swap(int* a, int* b) {int temp = *a; *a = *b; *b = temp;}

bool comparator(int* a, int* b) {return *a > *b;}

int* bubble_sort(int* array, int num)
{
    for (int i = 0; i<num-1; i++) {
        if (comparator(&array[i], &array[i+1])) {swap(&array[i], &array[i+1]);}
    };

    return array;
}
