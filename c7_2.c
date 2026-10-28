



#include <stdio.h>

int main(void) {
    int mark;
    char letter, modifier;
    double point;

    printf("Enter total mark: ");
    if (scanf("%d", &mark) != 1) return 1;

    /* 
       BUG INTRODUCED: Changed '>=' to '>' in the first condition.
       Effect: mark = 93 skips this condition and incorrectly receives an A- grade instead of A.
    */
    if (mark > 93) { // Single character change: '=' removed
        letter = 'A'; modifier = ' '; point = 4.0;
    } else if (mark >= 90) {
        letter = 'A'; modifier = '-'; point = 3.7;
    } else if (mark >= 87) {
        letter = 'B'; modifier = '+'; point = 3.3;
    } else if (mark >= 83) {
        letter = 'B'; modifier = ' '; point = 3.0;
    } else if (mark >= 80) {
        letter = 'B'; modifier = '-'; point = 2.7;
    } else if (mark >= 77) {
        letter = 'C'; modifier = '+'; point = 2.3;
    } else if (mark >= 73) {
        letter = 'C'; modifier = ' '; point = 2.0;
    } else if (mark >= 70) {
        letter = 'C'; modifier = '-'; point = 1.7;
    } else if (mark >= 67) {
        letter = 'D'; modifier = '+'; point = 1.3;
    } else if (mark >= 60) {
        letter = 'D'; modifier = ' '; point = 1.0;
    } else {
        letter = 'F'; modifier = ' '; point = 0.0;
    }

    printf("Mark %3d Grade %c%c Grade point %.1f\n", mark, letter, modifier, point);
    return 0;
}