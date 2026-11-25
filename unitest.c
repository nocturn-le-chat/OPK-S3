#include "heap-sort.h"
#include <assert.h>


bool int_comp(void* first, void* second) {return *(int*)first>*(int*)second;}
bool flo_comp(void* first, void* second) {return *(float*)first>*(float*)second;}
bool dub_comp(void* first, void* second) {return *(double*)first>*(double*)second;}

int checkout(void* array, int arr_len, size_t size, bool (*comparator)(void*, void*)) {
    int result = 0;

    for (int i=0; i<arr_len-1; i++) {
        unsigned char* first =  (array + (int)size*i);
        unsigned char* second = (array + (int)size*(i+1));
        if (comparator(first, second)) {result=1;}
    }
    return result;
}

void stand_test() {
    int    in_mass[] = {8, 8, 2, 7, 3, 3, 1};
    float  fl_mass[] = {1.9, 213.4, 0.1, 53.4, 12.6, 65.1, 41.2};
    double db_mass[] = {312.422, 23.71, 621.666, 815.42, 0.01, 4371.64, 3147.352};

    heap_sort(in_mass, 7, sizeof*in_mass, int_comp);
    assert(checkout(in_mass, 7, sizeof*in_mass, int_comp)==0);

    heap_sort(fl_mass, 7, sizeof*fl_mass, flo_comp);
    assert(checkout(fl_mass, 7, sizeof*fl_mass, flo_comp)==0);
    
    heap_sort(db_mass, 7, sizeof*db_mass, dub_comp);
    assert(checkout(db_mass, 7, sizeof*db_mass, dub_comp)==0);
};

void longe_test() {
    int lin_mass[1000];
    for (int i = 0; i<1000; i++) {lin_mass[i] = rand();}

    heap_sort(lin_mass, 1000, sizeof*lin_mass, int_comp);
    assert(checkout(lin_mass, 1000, sizeof*lin_mass, int_comp)==0);
};

void extra_test() {
    int xin_mass[] = {-1, 0, 1, -111222, 19812312, 2, 54};
    int oin_mass[] = {1};
    int nin_mass[] = {};

    
    heap_sort(xin_mass, 7, sizeof*xin_mass, int_comp);
    assert(checkout(xin_mass, 7, sizeof*xin_mass, int_comp)==0);

    //assert(heap_sort(nin_mass, 0, sizeof(int), int_comp)==nin_mass);
    //assert(heap_sort(oin_mass, 1, sizeof*oin_mass, int_comp)==oin_mass);
};

void duple_test() {
    int  din_mass[] = {2, 1, 1, 3, 1, 1, 1};

    heap_sort(din_mass, 7, sizeof*din_mass, int_comp);
    assert(checkout(din_mass, 7, sizeof*din_mass, int_comp)==0);
};

int main() {
    stand_test();
    longe_test();

    extra_test();
    duple_test();
    return 0;
};