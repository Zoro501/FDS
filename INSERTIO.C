#include <stdio.h>

int main() {
    int n, i, j, minIndex, temp, isSorted;

    // User input for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array

    // User input for array elements
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        isSorted = 1; // Assume the array is sorted

        // Find the minimum element in the unsorted part
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
                isSorted = 0; // Found an out-of-order element
            }
        }

        // Swap if needed
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }

        // Print the array after each pass
        printf("Pass %d: ", i + 1);
        for (j = 0; j < n; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");

        // If no swaps were made, array is already sorted
        if (isSorted) {
            printf("Array is already sorted. Stopping early.\n");
            break;
        }
    }

    // Print final sorted array
    printf("Final sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
