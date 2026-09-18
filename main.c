#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define epsilon 0.0001

static bool zero(value) {return fabs(value) < epsilon;}

static void print_result(double value, bool iscomplex) {
    if (!iscomplex) {printf("X = %lf", value);} else {printf("X = %lfi", value);}
}



int main() {
    double a, b, c;
    printf("Enter numbers comma-separated: "); scanf("%lf, %lf, %lf", &a, &b, &c);
    if (fabs(a) < epsilon) {printf(c/b);};
    if (b==0 && c<0)  {printf("x = %lf", sqrt(c/a));};
    if (b==0 && c==0) {printf("x = 0");};
    if (b==0 && c>0)  {printf("x = %lf", sqrt(-c/a));};
    if (a==0 && c==0) {printf("x = 0");};
    if (a!=0 && b!=0 && c!=0) {
        double d = pow(b, 2) - 4*a*c;
        double res1 = (-b + sqrt(d))/(2*a);
        double res2 = (-b - sqrt(d))/(2*a);
        printf("%lf, %lf", res1, res2); 
    };
}
