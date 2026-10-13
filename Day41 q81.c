#include <stdio.h>

int main(void) {
    int n, i, j, symmetric = 1;
    scanf("%d", &n);
    if (n <= 0) return 0;

    int a[n][n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n && symmetric; i++)
        for (j = i + 1; j < n; j++)
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }

    printf("%s\n", symmetric ? "Symmetric" : "Not Symmetric");
    return 0;
}
