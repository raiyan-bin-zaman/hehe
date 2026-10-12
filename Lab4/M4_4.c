#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, rounded;
    int n, digits;

    printf("Enter a positive number and a positive integer> ");
    scanf("%lf%d", &x, &n);

    rounded = floor(x * 100 + 0.5) / 100;
    digits = floor(log10(n)) + 1;

    printf("x rounded to 2 places : %.4f\n", rounded);
    printf("digits in %d : %d\n", n, digits);
    return (0);
}
