#include <stdbool.h>


bool compare(char* prefix, char* suffix, int len) {
    bool flag = true;
    for (int index= len-1; index>=0; index--) {
        if (prefix[index] != suffix[index]) {flag = false;}
    }
    return flag;
}

int search(char symbol, char* string) {
    for (int index= sizeof(string)/sizeof(char)-1; index>=0; index--) {
        if (string[index]==symbol) {return index;}
    }
    return -1;
}

int bouyer_moor(char* needle, char* haystack)
{
    // Составление таблицы сдвигов //
    int need_len = sizeof(needle)/sizeof(char);
    int table[need_len];
    table[need_len] = 1;
    // Первый проход по шаблону //
    for (int index = need_len-2; index>=0; index--) {
        if (compare(&needle[need_len-1-index], &needle[need_len-1], need_len-index)) {
            table[index] = need_len - index;
        }
        else {table[index] = 0;}
    }
    // Второй проход по шаблону //
    for (int index = need_len-2; index>=0; index--) {
        //search();
    }
    // Проход по тексту //
    int head_index = 0;
    for (int nd_char= need_len; nd_char>=0; nd_char--) {
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