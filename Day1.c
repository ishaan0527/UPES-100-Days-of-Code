#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nSum = %d", a + b);
    printf("\nDifference = %d", a - b);
    printf("\nProduct = %d", a * b);

    if (b != 0)
        printf("\nQuotient = %d", a / b);
    else
        printf("\nQuotient cannot be calculated.");

    return 0;
}