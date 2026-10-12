#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal, rate, amount;
    int years;

    printf("Enter principal, rate (percent) and years> ");
    scanf("%lf%lf%d", &principal, &rate, &years);

    amount = principal * pow(1 + rate / 100, years);

    printf("Principal      : %10.2f\n", principal);
    printf("Final amount   : %10.2f\n", amount);
    printf("Interest earned: %10.2f\n", amount - principal);
    return (0);
}
