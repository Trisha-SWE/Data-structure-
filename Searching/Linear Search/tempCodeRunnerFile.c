#include <stdio.h>

void countOccurrences(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    
    if (count > 0) {
        printf("Element %d occurred %d times\n", target, count);
    } else {
        printf("Element %d not found\n", target);
    }
}

int main() {
    int n, target;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the target element: ");
    scanf("%d", &target);
    
    countOccurrences(arr, n, target);
    
    return 0;
}
