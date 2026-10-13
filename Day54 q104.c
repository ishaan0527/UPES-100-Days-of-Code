#include <stdio.h>

int main(void) {
    int n, x;
    long long total;

    scanf("%d", &n);
    total = (long long)n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        long long leftSum = (long long)x * (x + 1) / 2;
        long long rightSum = total - (long long)(x - 1) * x / 2;

        if (leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
