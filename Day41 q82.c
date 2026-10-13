#include <stdio.h>

int main(void) {
    int n, i, j;
    long long sum = 0;
    scanf("%d", &n);
    if (n <= 0) return 0;

    int a[n][n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++) {
        sum += a[i][i];
        if (i != n - 1 - i)
            sum += a[i][n - 1 - i];
    }

    printf("%lld\n", sum);
    return 0;
}
