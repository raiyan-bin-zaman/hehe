#include <stdio.h>

void draw_roof(void);
void draw_wall(void);
void draw_door(void);
void draw_house(void);

int main(void)
{
    draw_house();
    return (0);
}

void draw_house(void)
{
    draw_roof();
    draw_wall();
    draw_door();
}

void draw_roof(void)
{
    printf("   /\\   \n");
    printf("  /  \\  \n");
    printf(" /    \\ \n");
    printf("/______\\\n");
}

void draw_wall(void)
{
    printf("|      |\n");
}

void draw_door(void)
{
    printf("|  []  |\n");
    printf("|__[]__|\n");
}
