#include <stdlib.h>


typedef struct {int error_index, shift_index;} shiftable;

shiftable create_table(char* template);
int search(char symbol, char* string);
int bouyer_moor(char* needle, char* haystack);