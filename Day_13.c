/* Q25 - Basic calculator using switch-case */
#include <stdio.h>

int main() {
    double a, b;
    char op;

    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': printf("%.2lf", a + b); break;
        case '-': printf("%.2lf", a - b); break;
        case '*': printf("%.2lf", a * b); break;
        case '/':
            if (b != 0)
                printf("%.2lf", a / b);
            else
                printf("Division by zero is not possible");
            break;
        case '%':
            if ((int)b != 0)
                printf("%d", (int)a % (int)b);
            else
                printf("Division by zero is not possible");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}

/* Q26 - Print numbers from 1 to n */
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        printf("%d ", i);

    return 0;
}

