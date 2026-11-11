#include <stdbool.h>
#include <stdlib.h>


void swap(unsigned char* a, unsigned char* b, size_t size) {
    for (size_t i = 0; i < size; i++) {
        unsigned char temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }    
}

void* bubble_sort(void* array, int arr_len, size_t size, bool (*comparator)(int*, int*))
{   
    while(true) {
        bool repeat = false;
        for (int i=0; i<arr_len-1; i++) {
            unsigned char* first = (array + (int)size*i);
            unsigned char* second = (array + (int)size*(i+1));
            if (comparator(first, second)) {
                repeat = true;
                swap(first, second, size);
            }
        }
        if(!repeat) {break;}
    }
}