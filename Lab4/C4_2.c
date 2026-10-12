#include <stdio.h>
#include <math.h>

void print_heading(void);
void print_footer(void);

int main(void)
{
    print_heading();

    printf("Diagonal of a 3 by 4 rectangle = %.2f\n",
           sqrt(3.0 * 3.0 + 4.0 * 4.0));
    printf("Square root of 1.0 = %.2f\n", sqrt(1.0));

    print_footer();

    return (0);
}

void print_heading(void)
{
    printf("=== Square root tool ===\n");
}

void print_footer(void)
{
    printf("=== End ===\n");
}
