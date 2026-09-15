#include <stdio.h>

int main()
{
    int choice;

    printf("Day 33\n");
    printf("Q65 - Binary search in a sorted array\n");
    printf("Q66 - Insert an element in a sorted array\n");
    printf("Enter question number (65 or 66): ");
    scanf("%d", &choice);

    if (choice == 65)
    {
        int a[100], n, i, key;
        int low, high, mid, found = 0;

        printf("Enter number of elements: ");
        scanf("%d", &n);

        printf("Enter sorted array elements:\n");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("Enter element to search: ");
        scanf("%d", &key);

        low = 0;
        high = n - 1;

        while (low <= high)
        {
            mid = (low + high) / 2;

            if (a[mid] == key)
            {
                printf("Element found at position %d", mid + 1);
                found = 1;
                break;
            }
            else if (a[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }

        if (found == 0)
            printf("Element not found");
    }
    else if (choice == 66)
    {
        int a[100], n, i, value, pos;

        printf("Enter number of elements: ");
        scanf("%d", &n);

        printf("Enter sorted array elements:\n");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("Enter element to insert: ");
        scanf("%d", &value);

        pos = 0;

        while (pos < n && a[pos] < value)
            pos++;

        for (i = n; i > pos; i--)
            a[i] = a[i - 1];

        a[pos] = value;
        n++;

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
    }
    else
    {
        printf("Invalid question number.");
    }

    return 0;
}
