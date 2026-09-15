#include <stdio.h>

int main()
{
    int choice;

    printf("Day 34\n");
    printf("Q67 - Insert an element at a given position\n");
    printf("Q68 - Delete an element from an array\n");
    printf("Enter question number (67 or 68): ");
    scanf("%d", &choice);

    if (choice == 67)
    {
        int a[100], n, i, value, position;

        printf("Enter number of elements: ");
        scanf("%d", &n);

        printf("Enter array elements:\n");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("Enter element to insert: ");
        scanf("%d", &value);

        printf("Enter position (1 to %d): ", n + 1);
        scanf("%d", &position);

        if (position < 1 || position > n + 1)
        {
            printf("Invalid position.");
        }
        else
        {
            for (i = n; i >= position; i--)
                a[i] = a[i - 1];

            a[position - 1] = value;
            n++;

            printf("Array after insertion:\n");
            for (i = 0; i < n; i++)
                printf("%d ", a[i]);
        }
    }
    else if (choice == 68)
    {
        int a[100], n, i, position;

        printf("Enter number of elements: ");
        scanf("%d", &n);

        printf("Enter array elements:\n");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("Enter position to delete (1 to %d): ", n);
        scanf("%d", &position);

        if (position < 1 || position > n)
        {
            printf("Invalid position.");
        }
        else
        {
            for (i = position - 1; i < n - 1; i++)
                a[i] = a[i + 1];

            n--;

            printf("Array after deletion:\n");
            for (i = 0; i < n; i++)
                printf("%d ", a[i]);
        }
    }
    else
    {
        printf("Invalid question number.");
    }

    return 0;
}
