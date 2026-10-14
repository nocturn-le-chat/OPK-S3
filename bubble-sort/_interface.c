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
    if (num == 0) {printf("Here's your sorted array: { }. Satisfied?");}
    else {
        array = malloc(num * sizeof *array);
        for (int i = 0; i<num; i++) {scanf("%d,", &array[i]);};
    
        if (num = 1) {printf("Here's your sorted array: {%d}. Now satisfied?", array[0]);}
        else {bubble_sort(array, num);};

        for (int i = 0; i<num; i++) {printf("%d,", array[i]);};
        
        free(array);
    };
}