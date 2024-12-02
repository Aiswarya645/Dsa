#include <stdio.h>
#define MAX 100

int stack[MAX]; 
int top = -1;  
void push(int val) {
    if (top < MAX - 1) {
        top++;
        stack[top] = val;
    } else {
        printf("Stack overflow\n");
    }
}


int pop() {
    if (top != -1) {
        int val = stack[top];
        top--;
        return val;
    } else {
        printf("Stack underflow\n");
        return -1;
    }
}


int isEmpty() {
    return top == -1;
}

int reverseNumber(int n) {
    
    while (n > 0) {
        int digit = n % 10;
        push(digit);
        n = n / 10;
    }

    int reversed = 0, placeValue = 1;
    while (!isEmpty()) {
        reversed += pop() * placeValue;
        placeValue *= 10;
    }

    return reversed;
}

int main() {
    int n, reversed;
    printf("Enter the number: ");
    scanf("%d", &n);

    reversed = reverseNumber(n); 
    printf("Reversed number: %d\n", reversed);

    return 0;
}
