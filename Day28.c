#include <stdio.h>

int main()
{
    int choice;

    printf("Day 28\n");
    printf("Q55 - Prime numbers from 1 to n\n");
    printf("Q56 - Read and print 1D array\n");
    printf("Enter question number (55 or 56): ");
    scanf("%d", &choice);

    if (choice == 55)
    {
        int n, i, j, count;

        printf("Enter n: ");
        scanf("%d", &n);

        for (i = 2; i <= n; i++)
        {
            count = 0;

            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                    count++;
            }

            if (count == 2)
                printf("%d ", i);
        }
    }
    else if (choice == 56)
    {
        int a[100], n, i;

        printf("Enter number of elements: ");
        scanf("%d", &n);

        printf("Enter array elements:\n");

        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        printf("Array elements are:\n");

        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
    }
    else
    {
        printf("Invalid question number.");
    }

    return 0;
}
