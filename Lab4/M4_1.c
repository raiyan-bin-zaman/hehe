#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, y1, x2, y2, distance;

    printf("Enter x1 and y1> ");
    scanf("%lf%lf", &x1, &y1);
    printf("Enter x2 and y2> ");
    scanf("%lf%lf", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));

    printf("Distance          : %.3f\n", distance);
    printf("Rounded up        : %.0f\n", ceil(distance));
    return (0);
}
