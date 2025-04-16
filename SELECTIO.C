#include <stdio.h>

int main() {
    int n, i, j,a, temp, isSorted;

     int arr[30];


    printf("Enter the number of elements: ");
    scanf("%d", &n);


    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < n; i++) {
	printf("%d ", arr[i]);
    }
    printf("\n");

    // Selection Sort Algorithm
    for (i = 0; i < n - 1; i++) {
	a = i;
	isSorted = 1;

	// Find the minimum element in the unsorted part
	for (j = i + 1; j < n; j++) {
	    if (arr[j] < arr[a]) {
		a= j;
		isSorted = 0;
	    }
	}

	// Swap if needed
	if (a!= i) {
	    temp = arr[i];
	    arr[i] = arr[a];
	    arr[a] = temp;
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
    getch();
    return 0;
}

