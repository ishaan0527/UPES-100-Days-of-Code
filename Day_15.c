/* Q29 - Calculate factorial of a number */
#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers");
        return 0;
    }

    for (int i = 1; i <= n; i++)
        factorial *= i;

    printf("Factorial = %lld", factorial);

    return 0;
}



/* Q30 - Reverse a given number */
#include <stdio.h>

int main() {
    int n, reverse = 0, digit;
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    printf("Reverse = %d", reverse);

    return 0;
}

