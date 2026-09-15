/* Q3 - Area and perimeter of rectangle */
#include <stdio.h>

int main() {
    float length, breadth;
    scanf("%f %f", &length, &breadth);

    printf("Area = %.2f\n", length * breadth);
    printf("Perimeter = %.2f", 2 * (length + breadth));
    return 0;
}



/* Q4 - Area and circumference of circle */
#include <stdio.h>

int main() {
    float r;
    const float pi = 3.14159;

    scanf("%f", &r);

    printf("Area = %.2f\n", pi * r * r);
    printf("Circumference = %.2f", 2 * pi * r);
    return 0;
}

