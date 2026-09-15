#include <stdio.h>

int main() {
    long long n, temp, power = 1, first, last, middle, result;
    scanf("%lld", &n);

    if (n < 0) {
        printf("Enter a non-negative number");
        return 0;
    }

    if (n < 10) {
        printf("%lld", n);
        return 0;
    }

    temp = n;
    last = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }

    first = temp;
    middle = (n % power) / 10;
    result = last * power + middle * 10 + first;

    printf("%lld", result);

    return 0;
}

/* Q42 - Check if a number is a perfect number */
#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not a Perfect Number");
        return 0;
    }

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}

