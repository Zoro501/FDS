#include <stdio.h>

int main() 
{
    int n, i, j, temp, choice;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Choose sorting order:\n");
    printf("1 for Ascending\n");
    printf("2 for Descending\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    
    if (choice == 1) {
        for (i = 0; i < n-1; i++) 
        {
            for (j = 0; j < n-i-1; j++) 
            {
                if (arr[j] > arr[j + 1]) 
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            printf("Array after pass %d: ", i + 1);
            for (int k = 0; k < n; k++)
            {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
        printf("Array sorted in ascending order:\n");
    } else if (choice == 2) {
        
        for (i = 0; i < n-1; i++) 
        {
            for (j = 0; j < n-i-1; j++) 
            {
                if (arr[j] < arr[j + 1]) 
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            printf("Array after pass %d: ", i + 1);
            for (int k = 0; k < n; k++)
            {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
        printf("Array sorted in descending order:\n");
    } else {
        printf("Invalid choice! Exiting program.\n");
        return 1;
    }

    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}