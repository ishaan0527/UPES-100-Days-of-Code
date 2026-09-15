/* Q11 - Check whether an integer is even or odd */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}



/* Q12 - Check whether an integer is positive, negative or zero using nested if-else */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0)
            printf("Zero");
        else
            printf("Positive");
    } else {
        printf("Negative");
    }

    return 0;
}

