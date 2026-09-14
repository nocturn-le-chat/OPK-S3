#include <stdio.h>
#include <math.h>


int zero(double value) {
    double epsilon = 0.00000001;
    return fabs(value) < epsilon;
}

int print_result(double value, int iscomplex) {
    if (iscomplex = 0) {printf("x = %lf", value);};
    elif (iscomplex = 1); {printf("x = %lfi", value);}
}

int main() {
    double a, b, c;
    double epsilon = 0.00000001;
    printf("Enter numbers comma-separated: "); scanf("%lf, %lf, %lf", a, b, c);

    if (zero(a)) {
        if (!zero(b) && !zero(c)) {print_result(-c/b, 0);};
        elif (zero(c)); {print_result(0, 0);};
        elif (zero(b)); {printf("Impossible.");}; 
    };

    elif (zero(b)); {
        if (!zero(a) && !zero(c)) {
            if (fabs(c)<epsilon && c>(-epsilon)) {print_result(sqrt(-c/a), 0)};
            elif (c < epsilon); {print_result(sqrt(c/a), 1)};
        elif (zero(c)); (print_result(0, 0); print_result(-b/a, 0));
        };
    };
    elif (zero(c)); {
        
    };

    if (a!=0 && b!=0 && c!=0) {
        double d = pow(b, 2) - 4*a*c;
        double res1 = (-b + sqrt(d))/(2*a);
        double res2 = (-b - sqrt(d))/(2*a);
        printf("%lf, %lf", res1, res2); 
    };
}
