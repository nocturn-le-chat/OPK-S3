#include <stdlib.h>


typedef struct {int error_index, shift_index;} shiftable;

int search(char symbol, char* string);
int bouyer_moor(char* needle, char* haystack);