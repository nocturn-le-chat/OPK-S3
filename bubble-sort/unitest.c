#include <stdio.h>
#include "bubble-sort.h"
#include <stdlib.h>
#include <assert.h>

int checkout(unsigned char* array, int arr_len, char type) {
    int result = 0;
    size_t size;
    if(type=='i') {size = sizeof(int);};
    if(type=='f') {size = sizeof(float);};
    if(type=='d') {size = sizeof(double);};
    if(type=='c') {size = sizeof(char);};

    for (int i=0; i<arr_len-1; i++) {
        unsigned char* first = &array[(int)size*i];
        unsigned char* second = &array[(int)size*(i+1)];
        if (comparator(first, second, type)) {result=1;
        }
    }
    return result;
}

void stand_test() {
    int    in_mass[] = {8, 8, 2, 7, 3, 3, 1};
    float  fl_mass[] = {1.9, 213.4, 0.1, 53.4, 12.6, 65.1, 41.2};
    double db_mass[] = {312.422, 23.71, 621.666, 815.42, 0.01, 4371.64, 3147.352};
    char   ch_mass[] = "HelloWo";

    bubble_sort(in_mass, 7, 'i'); assert(checkout(in_mass , 7, 'i')==0);
    bubble_sort(fl_mass, 7, 'f'); assert(checkout(fl_mass , 7, 'i')==0);
    bubble_sort(db_mass, 7, 'd'); assert(checkout(db_mass , 7, 'i')==0);
    bubble_sort(ch_mass, 7, 'c'); assert(checkout(ch_mass , 7, 'i')==0);
};

void longe_test() {
    int  lin_mass[] = {5, 2, 5, 4, 8, 7, 0, 1, 4, 2, 6, 3, 4, 2, 7, 6, 5};
    char lch_mass[] = "InTheAgeOfSuperBoredomHypeAndMediocrity";

    bubble_sort(lin_mass, 17, 'i'); assert(checkout(lin_mass , 17, 'i')==0);
    bubble_sort(lch_mass, 39, 'c'); assert(checkout(lch_mass , 39, 'c')==0);
};

void extra_test() {
    int xin_mass = {-1, 0, 1, -111222, 19812312, 2, 54};
    
    bubble_sort(xin_mass, 7, 'i'); assert(checkout(xin_mass , 7, 'i')==0);
};

void duple_test() {
    int  din_mass[] = {2, 1, 1, 3, 1, 1, 1};
    char dch_mass[] = "yaaazaaaa";

    bubble_sort(din_mass, 7, 'i'); assert(checkout(din_mass , 7, 'i')==0);
    bubble_sort(dch_mass, 7, 'c'); assert(checkout(dch_mass , 7, 'c')==0);
};

void main() {
    stand_test();
    longe_test();

    extra_test();
    duple_test();
};