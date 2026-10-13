#include <stdio.h>

int main(void) {
    int n, k, i;
    scanf("%d", &n);
    if (n <= 0) return 0;

    int a[n], temp[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);
    k = ((k % n) + n) % n;

    for (i = 0; i < n; i++)
        temp[(i + k) % n] = a[i];

    for (i = 0; i < n; i++)
        printf("%d ", temp[i]);
    printf("\n");

    return 0;
}
