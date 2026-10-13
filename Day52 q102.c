#include <stdio.h>

int main(void) {
    int n, x, i, answer = -1;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &x);

    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    printf("%d\n", answer);
    return 0;
}
