#include <stdbool.h>
#include <stdlib.h>


void swap(unsigned char* first, unsigned char* second, size_t size) {
    for (int i = 0; i<(int)size; i++) {
        unsigned char temp = first[i];
        first[i] = second[i];
        second[i] = temp;
    }
}

void sift_down(void* array, int index, int len, size_t size, bool (*comparator)(void*, void*)) {
    while (len>1&&(2*index+1<=len-1)) {
        unsigned char* parent =  (array + (int)size*index);
        unsigned char* f_child = (array + (int)size*(2*index+1));
        unsigned char* s_child;
        if (2*index+2<=len-1) {s_child = (array + (int)size*(2*index+2));}
        else {s_child= NULL;}

        if (comparator(f_child, parent)&&(s_child==NULL||comparator(f_child, s_child))) {
            swap(parent, f_child, size);
            index = index+2*index+1;
        }
        else if (s_child!=NULL&&comparator(s_child, parent)) {
            swap(parent, s_child, size);
            index = index+2*index+2;
        }
        else {break;};
    }
}

void heap_sort(void* array, int len, size_t size, bool (*comparator)(void*, void*))
{
    //Построение кучи
    for (int i = (len-1)/2; i>=0; i--) {
        sift_down(array, i, len, size, comparator);
    }

    //Сортировка
    for (int i= len-1; i>=0; i--) {
        swap(array, (array+(int)size*i), size);
        sift_down(array, 0, i, size, comparator);
    }
}