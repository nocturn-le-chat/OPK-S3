#include <unitest.h>
#include <bubble-sort.h>


void main()
{
    //Тестирование//
    runalltest();
    
    //Исполнение//
    printf("\nEnter your sequence\n");
    printf("{number}: {values comma-separated} >>> ");
    
    int num; int *array;
    scanf("%d:", &num);
    if (num == 0) {return 1;}
    else {array = malloc(num * sizeof *array);}

    for (int i = 0; i<num; i++) {scanf("%d,", &array[i]);};

    bubble_sort(array, num);

    for (int i = 0; i<num; i++) {printf("%d,", array[i]);};

    free(array);
}