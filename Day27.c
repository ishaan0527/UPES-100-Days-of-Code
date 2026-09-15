#include <stdio.h>

int main()
{
    int choice, i, j;

    printf("Day 27\n");
    printf("Q53 - Pattern 1\n");
    printf("Q54 - Pattern 2\n");
    printf("Enter question number (53 or 54): ");
    scanf("%d", &choice);

    if (choice == 53)
    {
        // Q53
        for (i = 1; i <= 5; i++)
        {
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }

        for (i = 4; i >= 1; i--)
        {
            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");
            printf("\n");
        }
    }
    else if (choice == 54)
    {
        // Q54
        for (i = 1; i <= 4; i++)
        {
            for (j = 1; j <= 4 - i; j++)
                printf(" ");

            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");

            printf("\n");
        }

        for (i = 3; i >= 1; i--)
        {
            for (j = 1; j <= 4 - i; j++)
                printf(" ");

            for (j = 1; j <= 2 * i - 1; j++)
                printf("*");

            printf("\n");
        }
    }
    else
    {
        printf("Invalid question number.");
    }

    return 0;
}
