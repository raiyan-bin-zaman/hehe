#include <stdio.h>
#include <math.h>

int main(void)
{
    double x;

    printf("Enter a positive number> ");
    scanf("%lf", &x);

    printf("sqrt        : %.4f\n", sqrt(x));
    printf("pow(x,0.5)  : %.4f\n", pow(x, 0.5));
    printf("cube root   : %.4f\n", pow(x, 1.0 / 3.0));
    printf("fifth root  : %.4f\n", pow(x, 1.0 / 5.0));
    printf("pow(x, 1/3) : %.4f\n", pow(x, 1 / 3));
    return (0);
}
