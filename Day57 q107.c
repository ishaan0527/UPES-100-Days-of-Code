#include <stdio.h>
int main(void) {
    int n, i, j;
    scanf("%d", &n);
    int arr[n], result[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) {
        result[i] = -1;
        for (j = i - 1; j >= 0; j--)
            if (arr[j] > arr[i]) { result[i] = arr[j]; break; }
    }
    for (i = 0; i < n; i++) { if (i) printf(","); printf("%d", result[i]); }
    printf("\n");
    return 0;
}
