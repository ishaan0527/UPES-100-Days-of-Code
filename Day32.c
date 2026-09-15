#include <stdio.h>

int main()
{
    int choice;

    printf("Day 32\n");
    printf("Q63 - Merge two arrays\n");
    printf("Q64 - Find the digit that occurs most in an integer\n");
    printf("Enter question number (63 or 64): ");
    scanf("%d", &choice);

    if (choice == 63)
    {
        int a[100], b[100], c[200];
        int n1, n2, i;

        printf("Enter number of elements in first array: ");
        scanf("%d", &n1);

        printf("Enter first array elements:\n");
        for (i = 0; i < n1; i++)
            scanf("%d", &a[i]);

        printf("Enter number of elements in second array: ");
        scanf("%d", &n2);

        printf("Enter second array elements:\n");
        for (i = 0; i < n2; i++)
            scanf("%d", &b[i]);

        for (i = 0; i < n1; i++)
            c[i] = a[i];

        for (i = 0; i < n2; i++)
            c[n1 + i] = b[i];

        printf("Merged array:\n");
        for (i = 0; i < n1 + n2; i++)
            printf("%d ", c[i]);
    }
    else if (choice == 64)
    {
        long long n;
        int digit, count, maxCount = 0, maxDigit = 0;

        printf("Enter an integer: ");
        scanf("%lld", &n);

        if (n < 0)
            n = -n;

        if (n == 0)
        {
            printf("Digit occurring most = 0");
        }
        else
        {
            for (digit = 0; digit <= 9; digit++)
            {
                long long temp = n;
                count = 0;

                while (temp > 0)
                {
                    if (temp % 10 == digit)
                        count++;

                    temp = temp / 10;
                }

                if (count > maxCount)
                {
                    maxCount = count;
                    maxDigit = digit;
                }
            }

            printf("Digit occurring most = %d", maxDigit);
        }
    }
    else
    {
        printf("Invalid question number.");
    }

    return 0;
}
