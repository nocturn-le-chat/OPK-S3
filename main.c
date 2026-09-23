#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define epsilon 0.0001


static bool zero(double value) {return fabs(value) < epsilon;}

void print_result(double value) {printf("X = %lf\n", value);}

void print_cmplex(double real, double imag) {
    if (!zero(real) && !zero(imag))
        {printf("X = %lf + %lfi\n", real, imag);}
    else if (zero(imag))
        {print_result(real);}
    else
        {printf("X = %lfi\n", imag);};
}

void main()
{
    double a, b, c;
    printf("Enter numbers comma-separated: "); scanf("%lf, %lf, %lf", &a, &b, &c);

    if (!zero(a)&&!zero(b)&&!zero(c)) {
        double d = pow(b, 2) - 4*a*c;
        if (zero(d)) {print_result(-b/(2*a));}
        else if (d > epsilon)
            {print_cmplex(-b/(2*a), sqrt(d)/(2*a)); print_cmplex(-b/(2*a), -sqrt(d)/(2*a));}
        else
            {print_result((sqrt(d)-b)/(2*a)); print_result((-sqrt(b)-b)/(2*a));}
    }

    else if (zero(a)) {
        if (!zero(b) && !zero(c))
            {print_result(-c/b);}
        else if (zero(c))
            {print_result(0);}
        else
            {printf("Impossible.");};
    }

    else if (zero(b)) {
        if (!zero(a) && !zero(c)) {
            if (c < -epsilon) {print_result(sqrt(-c/a));}
            else {print_cmplex(0, sqrt(c/a));};}
        else if (zero(c))
            {print_result(0); print_result(-b/a);} 
    }

    else {print_result(0); print_result(-b/a);}
}
