#include <stdio.h>

int main(void) {
    int n, i, candidate = 0, count = 0;

    scanf("%d", &n);
    int nums[n];

    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    printf("%d\n", count > n / 2 ? candidate : -1);
    return 0;
}
