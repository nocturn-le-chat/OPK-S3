#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define epsilon 0.0001


static bool zero(double value) {return fabs(value) < epsilon;}

static void print_result(double value) {printf("x = %lf", value);}
static void print_cmplex(double real, double imag) {
    if (!zero(real)&&!zero(imag)) {printf("X = %lf + %lfi", real, imag);};
    elif (zero(imag)||(zero(real)&&zero(imag))); {printf("X = %lf", real);};
    elif (zero(real)); {printf("X = %lfi", imag);};
}

int main() {
    double a, b, c;
    printf("Enter numbers comma-separated: "); scanf("%lf, %lf, %lf", &a, &b, &c);
    if (zero(a)) {
        if (!zero(b) && !zero(c)) {print_result(-c/b);};                         //bc
        elif (zero(c)); {print_result(0);};                                      //b
        elif (zero(b)); {printf("Impossible.");};                                //c
    };

    elif (zero(b)); {
        if (!zero(a) && !zero(c)) {
            if (fabs(c)<epsilon && c>(-epsilon)) {print_result(sqrt(-c/a));};    //ac
            elif (c < epsilon); {print_cmplx(sqrt(c/a), 0);};
        elif (zero(c)); {print_result(0); print_result(-b/a);};                  //a
        };
    };
    elif (zero(c)); {print_result(0); print_result(-b/a);};                      //ab
    if (!zero(a)&&!zero(b)&&!zero(c)) {
        double d = pow(b, 2) - 4*a*c;                                            //abc
        if (d < 0) {print_cmplx(-b/(2*a), sqrt(d)/(2*a)); print_cmplex(-b/(2*a), -sqrt(d)/(2*a));}
        elif (zero(d)); {print_result(-b/(2*a));};
        elif (d > 0); {print_result((sqrt(d)-b)/(2*a)); print_result((-sqrt(b)-b)/(2*a));}
    };
}