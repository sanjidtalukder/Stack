#include<stdio.h>
#define MAX_SIZE 4 //Maximum size of the stack

struct stack {
    int items[MAX_SIZE];
    int top;
};

void initializeStack(struct stack *s) {
    s->top = -1;
}

int isFull(struct stack *s) {
    return (s->top == MAX_SIZE - 1);
}

int isEmpty(struct stack *s) {
    return (s->top == -1);
}

void push(struct stack *s, int value) {
    if (isFull(s)) {
        printf("Stack is full.\n");
        return;
    }
    s->top++; // Increment the top
    s->items[s->top] = value; // Push the value onto the stack
    printf("%d pushed to stack.\n", value);
}
//POP of STack
int pop(struct stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return -1; // Return -1 or some other value to indicate an empty stack
    }
    int value = s->items[s->top]; // Get the value to pop
    s->top--; // Decrement the top
    printf("%d popped from stack.\n", value);
    return value; // Return the popped value
}

int main() {
    struct stack myStack;
    initializeStack(&myStack);
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);
    push(&myStack, 40);
     push(&myStack, 50);
    // push(&myStack, 50); // This will not be pushed as the stack size is MAX_SIZE 4

    // Pop elements from the stack
    pop(&myStack);
    pop(&myStack);
    pop(&myStack);

    // Additional pop will indicate the stack is empty
pop(&myStack);
pop(&myStack);

    return 0;
}
