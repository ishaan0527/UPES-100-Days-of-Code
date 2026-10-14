#include <stdio.h>
int main(void) {
    int n, k, i, j;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    if (k <= 0 || k > n) return 0;
    for (i = 0; i <= n - k; i++) {
        int firstNegative = 0;
        for (j = i; j < i + k; j++)
            if (arr[j] < 0) { firstNegative = arr[j]; break; }
        if (i) printf(" ");
        printf("%d", firstNegative);
    }
    printf("\n");
    return 0;
}
