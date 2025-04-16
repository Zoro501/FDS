#include <stdio.h>
#define MAX 100

struct Stack {
    int data[MAX];
    int top;
};

void initialize(struct Stack s[]) {
    s[0].top = -1;
}

int isEmpty(struct Stack s[]) {
    return s[0].top == -1;
}

int isFull(struct Stack s[]) {
    return s[0].top == MAX - 1;
}

void push(struct Stack s[], int value) {
    if (!isFull(s)) {
        s[0].data[++(s[0].top)] = value;
    }
}

int pop(struct Stack s[]) {
    if (!isEmpty(s)) {
        return s[0].data[(s[0].top)--];
    }
    return -1;
}

void decimalToBinary(int decimal) {
    struct Stack s[1];
    initialize(s);

    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (decimal > 0) {
        push(s, decimal % 2);
        decimal /= 2;
    }

    printf("Binary: ");
    while (!isEmpty(s)) {
        printf("%d", pop(s));
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    decimalToBinary(num);
   
   getch(); 
    return 0;
}

