#include <stdio.h>
#include "bubble-sort.h"
#include <stdlib.h>

int checkout(void* array, int len, int type) {
    size_t size;
    if (type==1||type==4) {size = sizeof(int);};
    if (type==2) {size = sizeof(float);};
    if (type==3) {size = sizeof(double);};
    size = (int)size;

    int result = 0;
    for (int i = 0; i<len; i++) {
        if (comparator(&array[size*i], &array[size*(i+1)], type)) {result = 1;}
    }
};


char stand_test() {
    int result = 0;
    int int_array[] = {1, 3, 3, 7, 2, 2, 8};
    float fl_array[] = {1.0, 2.2, 6345.3, 13.0};
    double db_array[] = {0.01, 1337.228, 13.123, 41123.3};
    char ch_array[] = "NcTrNsLeEt";

    bubble_sort(int_array, 7, 1); if(checkout(int_array, 7, 1)==1) {result = 1;};
    bubble_sort(fl_array, 4, 2); if(checkout(fl_array, 4, 2)==1) {result = 2;};
    bubble_sort(db_array, 4, 3); if(checkout(db_array, 4, 3)==1) {result = 3;};
    bubble_sort(ch_array, 11, 4); if(checkout(fl_array, 11, 4)==1) {result = 4;};

    return result;
};

int longe_test() {
    int result = 0;
    int lint_array[] = {5, 1, 2, 3, 5, 1, 2, 3, 7, 3, 4, 8, 1, 5, 3, 4, 2, 6, 4, 8, 6, 7, 5, 4, 3, 2};
    char lch_array[] = "InTheAgeOfSuperBoredomHypeAndMediocrityCelebrateRelentlessnessMenaceToSociety";

    bubble_sort(lint_array, sizeof(lint_array)/sizeof*lint_array, 1);
    if(checkout(lint_array,  sizeof(lint_array)/sizeof*lint_array, 1)==1) {result = 5;};
    bubble_sort(lch_array, sizeof(lch_array)/sizeof*lch_array, 4);
    if(checkout(lch_array, sizeof(lch_array)/sizeof*lch_array, 4)==1) {result = 6;};

    return result;
};

int extra_test() {
    int result = 0;
    int xint_array[] = {100, 0, -100, -2328737, 248719823981232, 0};

    bubble_sort(xint_array, 6, 1);
    if(checkout(xint_array, 6, 1)==1) {result = 7;};

    return result;
};

int duple_test() {
    int result = 0;
    int dint_array[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    bubble_sort(dint_array, 10, 1);
    if(checkout(dint_array, 10, 1)==1) {result = 8;};

    return result;
};

void main() {
    int issues[4];

    int std = stand_test(); if(std!=0) {issues[0]=std;};
    int lon = longe_test(); if(lon!=0) {issues[1]=lon;};
    int ext = extra_test(); if(ext!=0) {issues[2]=ext;};
    int dup = duple_test(); if(dup!=0) {issues[3]=dup;};

    printf("Tests ended with exit code %d", min(issues));
}