#include <stdio.h>
#include <math.h>
#include <stdbool.h>


void separator(int number, int* array) {
    int result[6];
    for (int i = 5; i >= 0; i--) {
        int denom = pow(10, i);
        array[5-i] = number / denom;
        number %= denom;
    }
}

int sum(int massive[], int start, int end) {
    int result = 0;
    for (int index=start; index<=end; index++) {
        result += massive[index];
    }
    return result;
}

bool islucky(int ticket[6]) {return sum(ticket, 0, 2)==sum(ticket, 3, 5);}

int main()
{
    int counter = 0;
    for (int number = 1; number<=999999; number++)
    {
        int ticket[6] = {0, 0, 0, 0, 0, 0};
        separator(number, &ticket);
        if (islucky(ticket)) {counter += 1;}
    }
    printf("%d\n", counter);
    return counter;
}
