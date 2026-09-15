#include <stdio.h>
#include <stdlib.h>

// Q69: Find the second largest element in an array
void Q69() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element = %d\n", secondLargest);
    free(arr);
}

// Q70: Rotate an array to the right by k positions
void Q70() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;

    for (int r = 0; r < k; r++) {
        int last = arr[n - 1];

        for (int i = n - 1; i > 0; i--)
            arr[i] = arr[i - 1];

        arr[0] = last;
    }

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    free(arr);
}

int main() {
    int choice;

    printf("Day 35 - Arrays (1D)\n");
    printf("1. Q69 - Second Largest Element\n");
    printf("2. Q70 - Rotate Array Right by K Positions\n");
    printf("Enter question number: ");
    scanf("%d", &choice);

    if (choice == 1)
        Q69();
    else if (choice == 2)
        Q70();
    else
        printf("Invalid choice.\n");

    return 0;
}
