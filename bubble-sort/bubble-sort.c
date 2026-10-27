#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


void swap(void* a, void* b, size_t el_size) {
    unsigned char *x = a;
    unsigned char *y = b;
    for (size_t i = 0; i < el_size; i++) {
        unsigned char temp = x[i];
        x[i] = y[i];
        y[i] = temp;
    }    
}

bool comparator(void* first, void* second, char* type) {
    if (type=="int"||type=="char") {
        return (int*)first > (int*)second;};
    if (type = "double") {
        return (double*)first > (double*)second;}
}


void* bubble_sort(void* array, int len, char* type)
{   
    if (len < 2) {return array;};

    while (true) {
        bool repeat = false;
        for (int i = 0; i<len-1; i++) {
            void* first = &array[i];
            void* second = &array[i+1];

            if (comparator(first, second, type)) {
                repeat = true;
                swap(first, second, sizeof* array);
            };

        if (repeat==false) {break;}
        }
    return array;
    }
}