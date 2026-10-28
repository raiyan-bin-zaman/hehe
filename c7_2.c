



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




C7.1



#include <stdio.h>

int main(void) {
    int mark;
    char letter;

    printf("Enter mark: ");
    if (scanf("%d", &mark) != 1) return 1;

    // Fix 1: Adding a fallback 'else' branch to handle marks below 65
    if (mark >= 90) {
        letter = 'A';
    } else if (mark >= 80) {
        letter = 'B';
    } else if (mark >= 70) {
        letter = 'C';
    } else if (mark >= 65) {
        letter = 'D';
    } else {
        letter = 'F'; // Catch-all for unhandled inputs
    }

    printf("Grade %c\n", letter);
    return 0;
}




M7.3




#include <stdio.h>

int main(void) {
    int mark;
    double attendance;

    printf("Enter mark and attendance (%%): ");
    scanf("%d %lf", &mark, &attendance);

    if (mark >= 60) {
        if (attendance >= 70.0) {
            printf("Passed\n");
        } else {
            printf("Failed on attendance alone\n");
        }
    } else {
        if (attendance >= 70.0) {
            printf("Failed on mark alone\n");
        } else {
            printf("Failed on both\n");
        }
    }

    return 0;
}



#include <stdio.h>

int main(void) {
    int mark;
    char letter, modifier;
    double point;

    printf("Enter total mark: ");
    scanf("%d", &mark);

    // Outer if validates the input range
    if (mark >= 0 && mark <= 100) {
        if (mark >= 93) { letter = 'A'; modifier = ' '; point = 4.0; }
        else if (mark >= 90) { letter = 'A'; modifier = '-'; point = 3.7; }
        else if (mark >= 87) { letter = 'B'; modifier = '+'; point = 3.3; }
        else if (mark >= 83) { letter = 'B'; modifier = ' '; point = 3.0; }
        else if (mark >= 80) { letter = 'B'; modifier = '-'; point = 2.7; }
        else if (mark >= 77) { letter = 'C'; modifier = '+'; point = 2.3; }
        else if (mark >= 73) { letter = 'C'; modifier = ' '; point = 2.0; }
        else if (mark >= 70) { letter = 'C'; modifier = '-'; point = 1.7; }
        else if (mark >= 67) { letter = 'D'; modifier = '+'; point = 1.3; }
        else if (mark >= 60) { letter = 'D'; modifier = ' '; point = 1.0; }
        else { letter = 'F'; modifier = ' '; point = 0.0; }

        printf("Mark %3d Grade %c%c Grade point %.1f\n", mark, letter, modifier, point);
    } else {
        printf("Invalid mark: %d. Must be between 0 and 100.\n", mark);
    }

    return 0;
}
. eita M7.2
