#include <stdio.h>

int main(void)
{
    int n = 1911;
/*
    printf("Enter an integer: ");
    scanf("%d", &n);
*/
    if (n >= 0 && n <= 100)
        printf("In range\n");
    else
        printf("Out of range\n");

    if (n % 2 == 0)
        printf("Even\n");

    return 0;
}
