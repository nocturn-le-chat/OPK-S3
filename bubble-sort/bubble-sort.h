#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void swap(unsigned char* a, unsigned char* b, size_t el_size);
bool comparator(unsigned char* first, unsigned char* second, int type);
void bubble_sort(unsigned char* array, int len, char type);