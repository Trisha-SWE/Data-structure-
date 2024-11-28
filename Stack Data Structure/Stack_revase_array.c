#include <stdio.h>
#define MAX 100

int top = -1;
int stack[MAX];

// Function to push element into the stack
void push(int num) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = num;
    }
}

// Function to pop element from the stack
int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

// Function to reverse an array using stack
void reverseArray(int arr[], int n) {
    // Push all elements of array into the stack
    for (int i = 0; i < n; i++) {
        push(arr[i]);
    }

    // Pop all elements from the stack back into the array
    for (int i = 0; i < n; i++) {
        arr[i] = pop();
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
