#include <sq_eq.h>
#include <unitest.h>

static void main()
{
    run_test();
    
    double a, b, c;
    printf("Enter numbers comma-separated: "); scanf("%lf, %lf, %lf", &a, &b, &c);

    sq_eq(a, b, c);
}