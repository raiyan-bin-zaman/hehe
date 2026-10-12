#include <stdio.h>

double add_vat(double price);
void print_boxed(double value);

int main(void)
{
    print_boxed(add_vat(100.0));
    print_boxed(add_vat(200.0));

    return (0);
}

double add_vat(double price)
{
    return (price * 1.15);
}

void print_boxed(double value)
{
    printf("**************\n");
    printf("* %10.2f *\n", value);
    printf("**************\n");
}


// write the output & prototype and cat. in the lab manual.
