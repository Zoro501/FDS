#include <stdio.h>
#define MAX 100


struct Contact {
    char name[50];
    long int phone; 
};

int main() {
    struct Contact stack[MAX];
    int top = -1;
    int choice;

    do {
        
        printf("\nContact List Menu:\n");
        printf("1. Add Contact\n");
        printf("2. View All Contacts\n");
        printf("3. Delete Last Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    switch (choice) {
        case 1:
        if (top == MAX - 1) {
    printf("Stack is full! Cannot add more contacts.\n");
    } else 
    {
    top++;
    printf("Enter your name: ");
    scanf("%s", stack[top].name);
    printf("Enter phone number on Interger Value: ");
    scanf("%ld", &stack[top].phone);
    printf("Contact added.\n");
    }
    break;
       
            
    case 2:
    if (top == -1) {
    printf("No contacts to show or Stack is Empty\n");
    } else 
    {
    printf("\nContacts (Last Added First):\n");
    for (int i = top; i >= 0; i--) 
   printf("Index: %d, Name: %s, Phone: %ld\n", top - i + 1, stack[i].name, stack[i].phone);
    {
    
    }
     }
    break;
         
            
    case 3:
        if (top == -1) {
    printf("No contacts to delete or Stack is Empty .\n");
    } 
    else 
    {
printf("Deleted Contact: Name: %s  Phone: %ld\n", stack[top].name,  stack[top].phone);
    top--;
    }
     break;
            
 case 4:
    printf("Exit\n");
    break;

default:
    printf("Invalid choice. Please try again.\n");
    break;
        }

    }
while (choice != 4); 

    return 0;
}
  