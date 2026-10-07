#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void swap(int* a, int* b) {int temp = *a; *a = *b; *b = temp;}

bool comparator(int* a, int* b) {return *a > *b;}

void main()
{
    printf("\nEnter your sequence\n");
    printf("{number}: {values comma-separated} >>> ");
    
    int num; int *array;
    scanf("%d:", &num);
    if (num == 0) {return 1;}
    else {array = malloc(num * sizeof *array);}

    for (int i = 0; i<num; i++) {
        scanf("%d,", &array[i]);
    };

    for (int i = 0; i<num-1; i++) {
        if (comparator(&array[i], &array[i+1])) {swap(&array[i], &array[i+1]);}
    };

    printf(" ");
    for (int i = 0; i<num; i++) {
        printf("%d ", array[i]);
    };

    free(array);
}
