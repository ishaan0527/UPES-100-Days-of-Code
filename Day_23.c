/* Q45 - Find the sum of 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms */
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double numerator = 2 * i;
        double denominator = 4 * i - 1;
        sum += numerator / denominator;
    }

    printf("Sum = %.2lf", sum);

    return 0;
}
