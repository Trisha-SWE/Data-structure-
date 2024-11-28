#include<stdio.h>

int main() {
    int x = 10, y = 20;

    // Pointers to store addresses of x and y
    int *ptr1, *ptr2;

    ptr1 = &x;  // ptr1 points to x
    ptr2 = &y;  // ptr2 points to y

    // Swap without temp variable using arithmetic operations
    *ptr1 = *ptr1 + *ptr2;  // x = x + y
    *ptr2 = *ptr1 - *ptr2;  // y = x - y (new value of x - y)
    *ptr1 = *ptr1 - *ptr2;  // x = x - y (new value of x - new y)

    printf("X = %d\n", *ptr1);
    printf("Y = %d\n", *ptr2);

    return 0;
}
