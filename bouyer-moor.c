#include <stdlib.h>


typedef struct {int error_index, shift_index;} shiftable;

//  Составление таблицы сдвигов
shiftable create_table(char* template) {
    shiftable table[sizeof(template)/sizeof(char)];

}

int search(char symbol, char* string) {
    for (int index= sizeof(string)/sizeof(char)-1; index>=0; index--) {
        if (string[index]==symbol) {return index;}
    }
    return -1;
}

int bouyer_moor(char* needle, char* haystack)
{
    int needlen = sizeof(needle)/sizeof(char);
    int head_index = 0;
    for (int nd_char= needlen; nd_char>=0; nd_char--) {
        char hay = haystack[head_index+nd_char];
        char ned = needle[nd_char];
        //Первая эвристика//
        if (hay!=ned) {
            if (search(hay, ned)!=-1) {head_index += search(hay, ned);}
            else {head_index += nd_char;}
        }
         
    }
    return -1;
}