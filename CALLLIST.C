#include <stdio.h>
#define MAX 100

int main() {
    long callStack[MAX];
    int top = -1;
    int choice, i;
    long callID;

    while(1) {

	printf("\nCall List Stack Operations:\n");
	printf("1. Add Incoming Call\n");
	printf("2. Answer Call (Remove from List)\n");
	printf("3. View Current Call on Top\n");
	printf("4. Display Call List\n");
	printf("5. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	if(choice == 1) {
	    if(top == MAX - 1) {
		printf("Call list is full (Stack Overflow)\n");
	    } else {
		printf("Enter the number (Call ID) to add: ");
		scanf("%ld", &callID);
		printf("\n number is %ld",callID);
		top++;
		callStack[top] = callID;
		printf("Incoming call number %ld has been added at index [%d]\n", callID, top);
	    }
	} else if(choice == 2) {
	    if(top == -1) {
		printf("No calls to answer (Stack Underflow)\n");
	    } else {
		printf("Answered call number %ld from index [%d]\n", callStack[top], top);
		top--;
	    }
	} else if(choice == 3) {
	    if(top == -1) {
		printf("No active calls\n");
	    } else {
		printf("Current call on top: Number %ld at index [%d]\n", callStack[top], top);
	    }
	} else if(choice == 4) {
	    if(top == -1) {
		printf("No calls in the list\n");
	    } else {
		printf("Call List (Top to Bottom):\n");
		for(i = top; i >= 0; i--) {
		    printf("Index [%d]: Number %ld\n", i, callStack[i]);
		}
	    }
	} else if(choice == 5) {
	    printf("Exiting Call List System.\n");
	    break;
	} else {
	    printf("Invalid choice. Try again.\n");
	}
    }
   getch();
    return 0;
}