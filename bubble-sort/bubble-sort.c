#include <stdbool.h>
#include <stdlib.h>


void swap(unsigned char* a, unsigned char* b, size_t size) {
    for (size_t i = 0; i < size; i++) {
        unsigned char temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }    
}

bool comparator(unsigned char* first, unsigned char* second, char type) {
    if (type=='i'||type=='c') {
        int a = *(int*)first;
        int b = *(int*)second;
        return a > b;
    };
    if (type=='2') {
        float a = *(float*)first;
        float b = *(float*)second;
        return a > b;
    };
    if (type=='3') {
        double a = *(double*)first;
        double b = *(double*)second;
        return a > b;
    };
    if (type=='c') {
        char a = *(char*)first;
        char b = *(char*)second;
        return a > b;
    };
}


void* bubble_sort(unsigned char* array, int arr_len, char type)
{   
    size_t size;
    if(type=='i') {size = sizeof(int);};
    if(type=='f') {size = sizeof(float);};
    if(type=='d') {size = sizeof(double);};
    if(type=='c') {size = sizeof(char);};

    while(true) {
        bool repeat = false;
        for (int i=0; i<arr_len-1; i++) {
            unsigned char* first = &array[(int)size*i];
            unsigned char* second = &array[(int)size*(i+1)];
            if (comparator(first, second, type)) {
                repeat = true;
                swap(first, second, size);
            }
        }
        if(!repeat) {break;}
    }
}