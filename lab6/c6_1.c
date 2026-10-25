#include <stdio.h>

int main(void)
{
    int total, count;
    double average = 0.0;

    printf("Enter the total: ");
    scanf("%d", &total);
    printf("Enter the count: ");
    scanf("%d", &count);

    /* guard first; && stops before the division when count is 0 */
    if (count != 0 && (average = (double)total / count, 1))
        printf("Average = %.2f\n", average);
    else
        printf("Cannot compute an average: count is zero.\n");

    return 0;
}
