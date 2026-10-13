#include <stdio.h>

int main(void) {
    int n, target, i, first = -1, last = -1;

    scanf("%d", &n);
    int nums[n];

    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    printf("%d %d\n", first, last);
    return 0;
}
