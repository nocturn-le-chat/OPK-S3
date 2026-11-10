#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void swap(void* a, void* b, size_t el_size);
bool comparator(void* first, void* second, int type);
void bubble_sort(void* array, int len, int type);