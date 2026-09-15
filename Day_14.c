/* Q27 - Print the sum of the first n odd numbers */
#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n - 1; i += 2)
        sum += i;

    printf("Sum = %d", sum);

    return 0;
}

/* Q28 - Print the product of even numbers from 1 to n */
#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2)
        product *= i;

    printf("Product = %lld", product);

    return 0;
}

