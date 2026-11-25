#include <stdbool.h>
#include <stdlib.h>

void swap(unsigned char* first, unsigned char* second, size_t size);
void sift_down(void* array, int index, int len, size_t size, bool (*comparator)(void*, void*));
void heap_sort(void* array, int len, size_t size, bool (*comparator)(void*, void*));