#include <stdio.h>

int main()
{
    int choice;

    printf("Day 30\n");
    printf("Q59 - Count even and odd numbers in an array\n");
    printf("Q60 - Count positive, negative, and zero elements\n");
    printf("Enter question number (59 or 60): ");
    scanf("%d", &choice);

    if (choice == 59)
    {
        int a[100], n, i, even = 0, odd = 0;

        printf("Enter number of elements: ");
        scanf("%d", &n);

        printf("Enter array elements:\n");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        printf("Even numbers = %d\n", even);
        printf("Odd numbers = %d", odd);
    }
    else if (choice == 60)
    {
        int a[100], n, i, positive = 0, negative = 0, zero = 0;

        printf("Enter number of elements: ");
        scanf("%d", &n);

        printf("Enter array elements:\n");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (i = 0; i < n; i++)
        {
            if (a[i] > 0)
                positive++;
            else if (a[i] < 0)
                negative++;
            else
                zero++;
        }

        printf("Positive = %d\n", positive);
        printf("Negative = %d\n", negative);
        printf("Zero = %d", zero);
    }
    else
    {
        printf("Invalid question number.");
    }

    return 0;
}
