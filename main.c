#include <stdio.h>
#include <math.h>


int main() {
    printf("Input range: >>> "); int range; scanf("%d", range);    //Ввод данных и создание массива
    int arr[range];

    for (int i = 0; i < range; i++) {arr[i] = i + 2;};             //Наполнение массива числами

    int volume = 1.25506*(range/log(range));
    int primes[volume];                                            //Массив для простых чисел


    for (int i = 0; i < range; i++) {                              //"Решето Эратосфена"
        if (arr[i] != 0) {
            int value = arr[i];                                    //Берется ненулевой элемент массива...
            for (int j = i+1; j < range; j++) {
                if ((arr[j]!="NULL")&&(arr[j]%value == 0)) {
                    arr[j]= "NULL";                               //... и все кратные ему заменяются на NULL
                }
            printf("%d", value);
            }
        }
    }
}
