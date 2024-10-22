#include <stdio.h>

void lastOccurrence(int arr[], int n, int target) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
        }
    }
    
    if (index != -1) {
        printf("Last occurrence of %d is at index %d\n", target, index);
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
    
    lastOccurrence(arr, n, target);
    
    return 0;
}
