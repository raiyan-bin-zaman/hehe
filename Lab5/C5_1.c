#include <stdio.h>

void print_title(void);
double read_price(void);
double find_economy(double km, double litres);
void print_report(double economy, double litres, double price);

int main(void)
{
    double km, litres, price, economy;

    print_title();

    printf("Distance travelled in km> ");
    scanf("%lf", &km);
    printf("Litres of fuel used> ");
    scanf("%lf", &litres);

    price = read_price();
    economy = find_economy(km, litres);
    print_report(economy, litres, price);

    return (0);
}

void print_title(void)
{
    printf("CSE 115 Trip Fuel Report\n");
    printf("========================\n");
}

double read_price(void)
{
    double price;

    printf("Fuel price per litre> ");
    scanf("%lf", &price);

    return (price);
}

double find_economy(double km, double litres)
{
    return (km / litres);
}

void print_report(double economy, double litres, double price)
{
    double cost;

    cost = litres * price;

    printf("**************************\n");
    printf("* Economy %9.2f km/L *\n", economy);
    printf("* Fuel cost %9.2f tk *\n", cost);
    printf("**************************\n");
}
