/* Q31 - Print the binary representation of a number */
#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    int bits[32], i = 0;

    while (n > 0) {
        bits[i++] = n % 2;
        n /= 2;
    }

    while (i > 0)
        printf("%d", bits[--i]);

    return 0;
}

/* Q32 - Check if a number is a palindrome */
#include <stdio.h>

int main() {
    int n, original, reverse = 0, digit;
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    if (original == reverse)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}

