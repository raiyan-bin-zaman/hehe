//rect_diagonal(19.0, 11.0)

#include <stdio.h>
#include <math.h>

double rect_diagonal(double w, double h);

int main(void)
{
    printf("rect_diagonal(3.0, 4.0) = %.4f\n", rect_diagonal(3.0, 4.0));
    printf("rect_diagonal(1.0, 1.0) = %.4f\n", rect_diagonal(1.0, 1.0));
    printf("rect_diagonal(5.0, 12.0) = %.4f\n", rect_diagonal(5.0, 12.0));

    return (0);
}

double rect_diagonal(double w, double h)
{
    return (sqrt(w * w + h * h));
}
