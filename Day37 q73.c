#include <stdio.h>

int main(void) {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    if (r <= 0 || c <= 0) return 0;

    int a[r][c];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++) {
        int sum = 0;
        for (j = 0; j < c; j++)
            sum += a[i][j];
        printf("%d ", sum);
    }
    printf("\n");
    return 0;
}
