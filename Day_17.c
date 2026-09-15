/* Q33 - Check if a number is an Armstrong number */
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp, digit, count = 0;
    long long sum = 0;

    scanf("%d", &n);

    if (n < 0) {
        printf("Not an Armstrong Number");
        return 0;
    }

    original = n;
    temp = n;

    if (temp == 0)
        count = 1;
    else {
        while (temp != 0) {
            count++;
            temp /= 10;
        }
    }

    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum += (long long)pow(digit, count);
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}



/* Q34 - Check if a number is prime */
#include <stdio.h>

int main() {
    int n, prime = 1;
    scanf("%d", &n);

    if (n < 2)
        prime = 0;

    for (int i = 2; i * i <= n && prime; i++) {
        if (n % i == 0)
            prime = 0;
    }

    if (prime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

