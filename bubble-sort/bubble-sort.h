#include <stdbool.h>
#include <stdlib.h>

void swap(unsigned char* a, unsigned char* b, size_t el_size);
void* bubble_sort(void* array, int arr_len, size_t size, bool (*comparator)(int*, int*));