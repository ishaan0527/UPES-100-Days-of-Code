#include <stdio.h>

int main()
{
    int choice;

    printf("Day 31\n");
    printf("Q61 - Linear search\n");
    printf("Q62 - Reverse an array without extra space\n");
    printf("Enter question number (61 or 62): ");
    scanf("%d", &choice);

    if (choice == 61)
    {
        int a[100], n, i, key, found = 0;

        printf("Enter number of elements: ");
        scanf("%d", &n);

        printf("Enter array elements:\n");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("Enter element to search: ");
        scanf("%d", &key);

        for (i = 0; i < n; i++)
        {
            if (a[i] == key)
            {
                printf("Element found at position %d", i + 1);
                found = 1;
                break;
            }
        }

        if (found == 0)
            printf("Element not found");
    }
    else if (choice == 62)
    {
        int a[100], n, i, temp;

        printf("Enter number of elements: ");
        scanf("%d", &n);

        printf("Enter array elements:\n");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (i = 0; i < n / 2; i++)
        {
            temp = a[i];
            a[i] = a[n - 1 - i];
            a[n - 1 - i] = temp;
        }

        printf("Reversed array:\n");
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
    }
    else
    {
        printf("Invalid question number.");
    }

    return 0;
}
