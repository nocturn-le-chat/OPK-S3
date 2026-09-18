#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define epsilon 0.0001


static bool zero(double value) {return fabs(value) < epsilon;}

static void print_result(double value, int iscomplex) {
    if (iscomplex = 0) {printf("x = %lf", value);} else{printf("x = %lfi", value);}
}

int main() {
    double a, b, c;
    printf("Enter numbers comma-separated: "); scanf("%lf, %lf, %lf", a, b, c);

    if (zero(a)) {
        if (!zero(b) && !zero(c)) {print_result(-c/b, 0);};
        elif (zero(c)); {print_result(0, 0);};
        elif (zero(b)); {printf("Impossible.");}; 
    };

    elif (zero(b)); {
        if (!zero(a) && !zero(c)) {
            if (fabs(c)<epsilon && c>(-epsilon)) {print_result(sqrt(-c/a), 0);};
            elif (c < epsilon); {print_result(sqrt(c/a), 1);};
        elif (zero(c)); {print_result(0, 0); print_result(-b/a, 0);};
        };
    };
    elif (zero(c)); {
        
    };

    if (a!=0 && b!=0 && c!=0) {
        double d = pow(b, 2) - 4*a*c;
        double res1 = (-b + sqrt(d))/(2*a);
        double res2 = (-b - sqrt(d))/(2*a);
        print_result(res1, 0); print_result(res2, 0); 
    };
}