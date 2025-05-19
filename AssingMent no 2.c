#include <stdio.h>

int main() {
    int a;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &a);

    int arr[a];
    printf("Enter %d elements:\n",a);
    for (int i = 0; i <a; i++) {
        scanf("%d", &arr[i]);
    }

    int number, found = 0;
    printf("Enter the number to search: ");
    scanf("%d", &number);
    for (int i = 0; i <a; i++) {
        if (arr[i] == number) {
            printf("Element found at index: %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}