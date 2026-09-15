/* Q5 - Celsius to Fahrenheit */
#include <stdio.h>

int main() {
    float c;
    scanf("%f", &c);

    printf("Fahrenheit = %.2f", (c * 9 / 5) + 32);
    return 0;
}



/* Q6 - Swap using a third variable */
#include <stdio.h>

int main() {
    int a, b, temp;
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: %d %d", a, b);
    return 0;
}

