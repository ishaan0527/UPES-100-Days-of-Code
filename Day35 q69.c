#include <stdio.h>
#include <limits.h>

int main(void) {
    int n, i;
    scanf("%d", &n);
    if (n < 2) {
        printf("At least two elements are required.\n");
        return 0;
    }

    int a[n], largest = INT_MIN, second = INT_MIN;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] > second && a[i] < largest) {
            second = a[i];
        }
    }

    if (second == INT_MIN)
        printf("No second-largest distinct element\n");
    else
        printf("%d\n", second);

    return 0;
}
