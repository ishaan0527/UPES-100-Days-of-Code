/* Q7 - Swap without a third variable */
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: %d %d", a, b);
    return 0;
}



/* Q8 - Sum of first n natural numbers */
#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("Sum = %d", sum);
    return 0;
}

