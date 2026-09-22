#include <stdio.h>
#include <math.h>
#include <stdbool.h>


void main() {
    printf("Input range: >>> ");                                   
    int range; scanf("%d", &range); bool array[range+1];

    for (int i = 0; i < range; i++) {array[i] = true;};
    array[0] = false; array[1] = false;                                       

    for (int i = 0; i < range; i++) {                          
        if (array[i] != 0) {
            int value = i;                               
            for (int j = i+1; j < range; j++) {
                if ((array[j]!=false)&&(j%value == 0)) {
                     array[j]= false;
                }
            }
            printf("%d\n", value);
        } 
    }
}
