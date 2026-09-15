/* Q35 - Print all factors of a number */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }

    return 0;
}



/* Q36 - Find HCF (GCD) of two numbers */
#include <stdio.h>

int main() {
    int a, b, temp;
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF = %d", a);

    return 0;
}

