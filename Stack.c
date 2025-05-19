#include <stdio.h>

int main() {
    int stack[8], top = -1, choice;

    do {
        printf("Choose an Operation which you want to Perform on Stack:\n1) Push\n2) Pop\n3) Display\n4) Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top >= 7) {
                    printf("Stack overflow!\n");
                } else {
                    printf("Enter element to push: ");
                    top++;
                    scanf("%d", &stack[top]);
                }
                break;

            case 2:
                if (top < 0) {
                    printf("Stack underflow!\n");
                } else {
                    printf("Element popped: %d\n", stack[top]);
                    top--;
                }
                break;

            case 3:
                if (top < 0) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack contents:\n");
                    for (int i = top; i >= 0; i--) {
                        printf("Stack at indexing %d is: %d\n", i, stack[i]);
                    }
                }
                break;

            case 4:
                printf("Exiting program\n");
                break;

            default:
                printf("Invalid choice. Enter Choice Again.\n");
        }
    } while (choice != 4);

    return 0;
}