/* Q9 - Simple and compound interest */
#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t;
    scanf("%f %f %f", &p, &r, &t);

    float si = (p * r * t) / 100;
    float ci = p * pow(1 + r / 100, t) - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f", ci);
    return 0;
}


/* Q10 - Convert seconds to hours:minutes:seconds */
#include <stdio.h>

int main() {
    int total, hours, minutes, seconds;
    scanf("%d", &total);

    hours = total / 3600;
    total %= 3600;
    minutes = total / 60;
    seconds = total % 60;

    printf("%02d:%02d:%02d", hours, minutes, seconds);
    return 0;
}

