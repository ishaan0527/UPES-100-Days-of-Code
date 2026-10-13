#include <stdio.h>

int main(void) {
    int r, c, i, j;
    long long sum = 0;
    scanf("%d %d", &r, &c);
    if (r <= 0 || c <= 0) return 0;

    int a[r][c];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }

    printf("%lld\n", sum);
    return 0;
}
