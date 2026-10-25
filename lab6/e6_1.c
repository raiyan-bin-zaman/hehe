#include <stdio.h>

int main(void)
{
    int p = 12, q = 5;

    printf("p > q            is %d\n", p > q);
    printf("p == q           is %d\n", p == q);
    printf("p %% q == 2      is %d\n", p % q == 2);
    printf("!(p > q)         is %d\n", !(p > q));
    printf("p > 10 && q > 10 is %d\n", p > 10 && q > 10);
    printf("p > 10 || q > 10 is %d\n", p > 10 || q > 10);
    printf("!p               is %d\n", !p);
    printf("p && q           is %d\n", p && q);

    return 0;
}
