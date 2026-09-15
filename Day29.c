#include <stdio.h>

int main()
{
    int choice;

    printf("Day 29\n");
    printf("Q57 - Sum of array elements\n");
    printf("Q58 - Maximum and minimum element\n");
    printf("Enter question number (57 or 58): ");
    scanf("%d", &choice);

    if (choice == 57)
    {
        int a[100], n, i, sum = 0;

        printf("Enter number of elements: ");
        scanf("%d", &n);

        printf("Enter array elements:\n");

        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (i = 0; i < n; i++)
            sum = sum + a[i];

        printf("Sum = %d", sum);
    }
    else if (choice == 58)
    {
        int a[100], n, i, max, min;

        printf("Enter number of elements: ");
        scanf("%d", &n);

        printf("Enter array elements:\n");

        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        max = a[0];
        min = a[0];

        for (i = 1; i < n; i++)
        {
            if (a[i] > max)
                max = a[i];

            if (a[i] < min)
                min = a[i];
        }

        printf("Maximum = %d\n", max);
        printf("Minimum = %d", min);
    }
    else
    {
        printf("Invalid question number.");
    }

    return 0;
}
