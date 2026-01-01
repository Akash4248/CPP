#include<stdio.h>
#include<ctype.h> // for isdigit
#include<stdlib.h> // for atoi
#define max 100

struct stack {
    int a[max];
    int top;
};

typedef struct stack Stack;

// Initialize stack
void initialize(Stack *s) {
    s->top = -1;
}

// Check if stack is full
int isfull(Stack *s) {
    return s->top == max - 1;
}

// Check if stack is empty
int isempty(Stack *s) {
    return s->top == -1;
}

// Push value onto the stack
void push(Stack *s, int value) {
    if(isfull(s)) {
        printf("Stack Overflow!\n");
        return;
    }
    s->a[++s->top] = value;
}

// Pop value from the stack
int pop(Stack *s) {
    if(isempty(s)) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return s->a[s->top--];
}

// Evaluate postfix expression
int evaluate_postfix(char s[]) {
    Stack st;
    initialize(&st);
    int i = 0, a, b, num;
    char buffer[10];  // Buffer to handle multi-digit numbers
    int buf_index = 0; // Index for the buffer

    // Traverse the expression
    while(s[i] != '\0') {
        // If the current character is a digit, accumulate it in the buffer
        if(isdigit(s[i])) {
            buffer[buf_index++] = s[i];
        } 
        // If we encounter a space, we process the number in the buffer
        else if(s[i] == ' ' && buf_index > 0) {
            buffer[buf_index] = '\0';  // Null-terminate the buffer
            num = atoi(buffer);        // Convert the buffer to an integer
            push(&st, num);            // Push the number onto the stack
            buf_index = 0;             // Reset buffer index for the next number
        }
        // If we encounter an operator, pop two operands and perform the operation
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            if(isempty(&st)) {
                printf("Stack Underflow!\n");
                return -1;
            }
            a = pop(&st);
            if(isempty(&st)) {
                printf("Stack Underflow!\n");
                return -1;
            }
            b = pop(&st);

            // Perform the operation and push the result back onto the stack
            switch(s[i]) {
                case '+':
                    push(&st, b + a);
                    break;
                case '-':
                    push(&st, b - a);
                    break;
                case '*':
                    push(&st, b * a);
                    break;
                case '/':
                    if(a == 0) {
                        printf("Division by zero!\n");
                        return -1;
                    }
                    push(&st, b / a);
                    break;
                default:
                    printf("Invalid operator: %c\n", s[i]);
                    return -1;
            }
        }
        i++;
    }

    // The last element in the stack is the result
    if(!isempty(&st)) {
        return pop(&st);
    }

    return -1;  // Return -1 in case of an error
}

int main() {
    char s[100];
    printf("Enter the postfix expression: ");
    fgets(s, sizeof(s), stdin);  // Read the entire postfix expression including spaces
    
    // Evaluate the postfix expression and print the result
    int result = evaluate_postfix(s);
    if(result != -1) {
        printf("The result is: %d\n", result);
    } else {
        printf("Invalid expression or error in evaluation.\n");
    }

    return 0;
}
