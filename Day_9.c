/* Q17 - Find and categorize the roots of a quadratic equation */
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation");
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Two distinct real roots\n");
        printf("Root 1 = %.2lf\n", r1);
        printf("Root 2 = %.2lf", r2);
    } else if (d == 0) {
        r1 = -b / (2 * a);
        printf("Two equal real roots\n");
        printf("Root = %.2lf", r1);
    } else {
        printf("Complex roots");
    }

    return 0;
}



/* Q18 - Assign a grade based on percentage */
#include <stdio.h>

int main() {
    float percentage;
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100)
        printf("Grade A");
    else if (percentage >= 80 && percentage < 90)
        printf("Grade B");
    else if (percentage >= 70 && percentage < 80)
        printf("Grade C");
    else if (percentage >= 60 && percentage < 70)
        printf("Grade D");
    else if (percentage >= 0 && percentage < 60)
        printf("Grade F");
    else
        printf("Invalid Percentage");

    return 0;
}

