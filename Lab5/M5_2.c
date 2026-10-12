
#include <stdio.h>

void print_time(int h, int m);

 int main(void)
 {
 print_time(7, 30);
 print_time(30, 7);
 print_time(3.9, 30);

 return (0);
 }

 void print_time(int h, int m)
 {
 printf("%d hour(s) and %d minute(s)\n", h, m);

 return (0);
 }
// write the output in the lab manual.
