#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double sqrt(double);

int main(void)
{
    printf("sqrt(49.0)              = %.4f\n", sqrt(49.0));
    printf("pow(2.0, 10.0)          = %.4f\n", pow(2.0, 10.0));
    printf("fabs(-7.5)              = %.4f\n", fabs(-7.5));
    printf("floor(-7.5)             = %.4f\n", floor(-7.5));
    printf("ceil(-7.5)              = %.4f\n", ceil(-7.5));
    printf("floor(7.5)              = %.4f\n", floor(7.5));
    printf("abs(-7)                 = %d\n", abs(-7));
    printf("sqrt(2.0)               = %.4f\n", sqrt(2.0));
    printf("pow(81.0, 0.5)          = %.4f\n", pow(81.0, 0.5));
    printf("sqrt(ceil(fabs(-7.4)))  = %.4f\n", sqrt(ceil(fabs(-7.4))));
    printf("log10(1000.0)           = %.4f\n", log10(1000.0));
    printf("exp(1.0)                = %.4f\n", exp(1.0));
    printf("pow(32.0, 1.0 / 5.0)    = %.4f\n", pow(32.0, 1.0 / 5.0));
    printf("sin(30.0)               = %.4f\n", sin(30.0));
    return (0);
}
