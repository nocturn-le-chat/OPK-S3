#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


void swap(void* a, void* b, size_t size) {
    unsigned char* first = a;
    unsigned char* second = b;
    for (size_t i = 0; i < size; i++) {
        unsigned char temp = first[i];
        first[i] = second[i];
        second[i] = temp;
    }    
}

bool comparator(void* first, void* second, int type) {
    if (type==1||type==4) {
        int a = *(int*)first;
        int b = *(int*)second;
        return a > b;
    };
    if (type==2) {
        float a = *(float*)first;
        float b = *(float*)second;
        return a > b;
    };
    if (type==3) {
        double a = *(double*)first;
        double b = *(double*)second;
        return a > b;
    };
}


void* bubble_sort(void* array, int len, int type)
{   
    if (len < 2) {return array;};
    size_t size;
    if (type==1||type==4) {size = sizeof(int);};
    if (type==2) {size = sizeof(float);};
    if (type==3) {size = sizeof(double);};
    size = (int)size;

    while (true) {
        bool repeat = false;
         for (int i = 0; i<len-1; i++) {
            if (comparator(&(array[size*i]), &(array[size*(i+1)]), type)) {
                repeat = true;
                swap(&array[size*i], &array[size*(i+1)], size);
            };

        if (repeat==false) {break;}
        }
    return array;
    }
}