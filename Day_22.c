/* Q43 - Check if a number is a strong number */
#include <stdio.h>

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n, original, digit, sum = 0;
    scanf("%d", &n);

    if (n < 0) {
        printf("Not a Strong Number");
        return 0;
    }

    original = n;

    if (n == 0)
        sum = 1;

    while (n != 0) {
        digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    if (sum == original)
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}



/* Q44 - Find the sum of 1 + 3/4 + 5/6 + 7/8 + ... up to n terms */
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double numerator = 2 * i - 1;
        double denominator = (i == 1) ? 1 : 2 * i;
        sum += numerator / denominator;
    }

    printf("Sum = %.2lf", sum);

    return 0;
}

