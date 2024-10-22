#include <stdio.h>

void findMissingNumber(int arr[], int n) {
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;
    
    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }
    
    int missingNumber = expectedSum - actualSum;
    printf("The missing number is %d\n", missingNumber);
}

int main() {
    int n;
    
    printf("Enter the value of N (sequence from 1 to N): ");
    scanf("%d", &n);
    
    int arr[n - 1];
    printf("Enter the sequence of numbers with one missing (size N-1):\n");
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }
    
    findMissingNumber(arr, n);
    
    return 0;
}
