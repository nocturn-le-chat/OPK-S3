#include <stdio.h>

void main() 
{
    int sums[14] = {};
    for (int first=0; first<10; first++) {
        for (int second=0; second<10; second++) {
            for (int last=0; last<10; last++) {
                int sum = first + second + last;
                if (sum<=14) {sums[sum] += 1;}
            }
        }
    };
    int counter = 0;
    for (int key=0; key<13; key++) {
        counter += sums[key]*sums[key];
    };
    counter += sums[13]*sums[13];
    counter = 2*counter;
    printf("Total lucky tickets: %d; ", counter);
    printf("percentage: %d%%\n", counter/10000);
}