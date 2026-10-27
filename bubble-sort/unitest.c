#include <assert.h>
#include <stdio.h>
#include "bubble-sort.h"
#include <stdlib.h>


void stand_test() {
    int res = 0;

    int int_array[] = {2987, 0, -1, -4527};
    double db_array[] = {0.00001, 12387.726, -19764.193, -0.01};
    char ch_array[] = "NcTrNsLeEt";

    bubble_sort(int_array, 8, sizeof* int_array);
    for (int i=0; i<4; i++) {printf("%d", int_array[i]);};
    //bubble_sort(db_array, 4, sizeof* db_array);
    //bubble_sort(ch_array, 11, sizeof* ch_array);
};

int longe_test() {};

int extra_test() {
    int res = 0;
    return res;
};

int duple_test() {
    int res = 0;
    return res;
};

void main() {
    stand_test();
    longe_test();
        
    extra_test();
    duple_test();
}