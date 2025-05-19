#include <stdio.h>

int main() {
    int n, target, i, low, high, mid;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;


        if (arr[mid] == target) {
            printf("Target %d found at index %d\n", target, mid);
            return 0;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Target %d not found in the array.\n", target);

    return 0;
}