#include <stdio.h>
#include <string.h>
#define MAX 100
#define SIZE 15

struct Call {
    char name[50];
    char callID[11];
};

int main() {
    struct Call callStack[MAX];
    int top = -1;
    int ch, i;
    struct Call newCall;



    while(1) {
	printf("\nCall List Stack Operations:\n");
	printf("1. Add Incoming Call\n");
	printf("2. Answer Call (Remove from List)\n");
	printf("3. View Current Call on Top\n");
	printf("4. Display Call List\n");
	printf("5. Exit\n");
	printf("Enter your choice: ");
	scanf("%d", &ch);

	if(ch == 1) {
	    if(top == MAX - 1) {
		printf("Call list is full (Stack Overflow)\n");
	    } else {
		printf("Enter caller name: ");
		scanf("%s", newCall.name);
		printf("Enter call ID: ");
		scanf("%s", newCall.callID);
		top++;
		strcpy(callStack[top].name, newCall.name);
		strcpy(callStack[top].callID, newCall.callID);
		printf("Incoming call from %s (%s) added at index [%d]\n", newCall.name, newCall.callID, top);
	    }
	} else if(ch == 2) {
	    if(top == -1) {
		printf("No calls to answer (Stack Underflow)\n");
	    } else {
		printf("Answered call from %s (%s) at index [%d]\n", callStack[top].name, callStack[top].callID, top);
		top--;
	    }
	} else if(ch == 3) {
	    if(top == -1) {
		printf("No active calls\n");
	    } else {
		printf("Current call on top: %s (%s) at index [%d]\n", callStack[top].name, callStack[top].callID, top);
	    }
	} else if(ch == 4) {
	    if(top == -1) {
		printf("No calls in the list\n");
	    } else {
		printf("Call List (Top to Bottom):\n");
		for(i = top; i >= 0; i--) {
		    printf("Index [%d]: %s (%s)\n", i, callStack[i].name, callStack[i].callID);
		}
	    }
	} else if(ch == 5) {
	    printf("Exiting Call List System.\n");
	    break;
	} else {
	    printf("Invalid choice. Try again.\n");
	}
    }

    getch();
    return 0;
}