#include <stdio.h>

int main(void) {
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    if (r <= 0 || c <= 0) return 0;

    int a[r][c];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    int smallest = a[0][0];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] < smallest)
                smallest = a[i][j];

    printf("%d\n", smallest);
    return 0;
}
