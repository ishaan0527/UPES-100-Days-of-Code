/* Q39 - Find the product of odd digits of a number */
#include <stdio.h>

int main() {
    long long n;
    int digit, found = 0;
    long long product = 1;

    scanf("%lld", &n);

    if (n < 0) n = -n;

    if (n == 0) {
        printf("No odd digits");
        return 0;
    }

    while (n != 0) {
        digit = n % 10;

        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }

        n /= 10;
    }

    if (found)
        printf("Product = %lld", product);
    else
        printf("No odd digits");

    return 0;
}

/* Q40 - Find the 1's complement of a binary number */
#include <stdio.h>

int main() {
    char binary[100];
    scanf("%99s", binary);

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number");
            return 0;
        }
    }

    printf("%s", binary);

    return 0;
}

