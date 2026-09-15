/* Q37 - Find LCM of two numbers */
#include <stdio.h>

int main() {
    long long a, b, x, y, gcd, lcm;
    scanf("%lld %lld", &a, &b);

    x = a < 0 ? -a : a;
    y = b < 0 ? -b : b;

    if (x == 0 || y == 0) {
        printf("LCM = 0");
        return 0;
    }

    long long p = x, q = y;
    while (q != 0) {
        long long temp = q;
        q = p % q;
        p = temp;
    }

    gcd = p;
    lcm = (x / gcd) * y;

    printf("LCM = %lld", lcm);

    return 0;
}

/* Q38 - Find the sum of digits of a number */
#include <stdio.h>

int main() {
    long long n;
    int sum = 0;

    scanf("%lld", &n);

    if (n < 0) n = -n;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum = %d", sum);

    return 0;
}

