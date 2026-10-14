#include <stdio.h>
int main(void) {
    int n, k, i;
    long long windowSum = 0, maxSum;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &k);
    if (k <= 0 || k > n) { printf("-1\n"); return 0; }
    for (i = 0; i < k; i++) windowSum += arr[i];
    maxSum = windowSum;
    for (i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) maxSum = windowSum;
    }
    printf("%lld\n", maxSum);
    return 0;
}
