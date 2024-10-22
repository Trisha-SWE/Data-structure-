#include <stdio.h>

void linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            return;
        }
    }
    printf("Element %d not found\n", target);
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
    
    linearSearch(arr, n, target);
    
    return 0;
}
