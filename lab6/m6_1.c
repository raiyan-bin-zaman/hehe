#include <stdio.h>

int main(void)
{
    double x, y, temp;

    printf("Enter the first real number: ");
    scanf("%lf", &x);
    printf("Enter the second real number: ");
    scanf("%lf", &y);

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    printf("In order: %.2f %.2f\n", x, y);

    return 0;
}
