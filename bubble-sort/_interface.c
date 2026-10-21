#include "unitest.h"
#include "bubble-sort.h"


void main()
{
    //Тестирование//
    runalltest();
    
    //Исполнение//
    printf("\nEnter your sequence\n");
    printf("{number}: {values comma-separated} >>> ");
    
    int num; int *array;
    scanf("%d:", &num);
    if (num == 0) {printf(" ");}
    else {
        array = malloc(num * sizeof *array);
        for (int i = 0; i<num; i++) {scanf("%d,", &array[i]);};
        bubble_sort(array, num);

        for (int i = 0; i<num; i++) {printf("%d ", array[i]);};
        printf("\n");
        free(array);
    };
}