#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double epsilon = 0.001;
    printf("Enter numbers comma-separated: "); scanf("%lf, %lf, %lf", a, b, c);
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
