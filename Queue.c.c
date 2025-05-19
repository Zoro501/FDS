#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

int main() {
    int choice, value;

    while (1) 
    {
        printf("\n Select any Option from this\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            if (rear == SIZE - 1) {
                printf("Queue Overflow\n");
            } else {
                if (front == -1) front = 0; 
                rear++;
                queue[rear] = value;
                printf("Number Inserted is %d\n", value);
            }
        } 
        else if (choice == 2) 
        {
            if (front == -1 || front > rear) {
                printf("Queue Underflow\n");
            } else 
            {
                printf("Number Deleted is %d\n", queue[front]);
                front++;
                if (front > rear) {  
                    front = rear = -1;
                }
            }
        } 
        else if (choice == 3) 
        {
            if (front == -1 || front > rear) {
                printf("Queue is empty\n");
            } else 
            {
                printf("Queue elements are: ");
                for (int i = front; i <= rear; i++) 
                {
                    printf("%d ", queue[i]);
                }
                printf("\n");
            }
        } 
        else if (choice == 4) 
        {
            printf("Exit\n");
            break; 
        } 
        else 
        {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}

