#include <stdio.h>
#include <stdbool.h>

static int sum(int massive[], int start, int end) {
    int result;
    for (int index=start; index=end; index++) {
        result += massive[index];
    }
    return result;
}

static bool islucky(int ticket[6]) {return sum(ticket, 0, 2) == sum(ticket, 3, 5);}

void main()
{
    return 0
}
