#include <stdio.h>

int binarySearchFloat(float arr[], int n, float target) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    float target;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    float arr[n];
    printf("Enter the sorted floating-point numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    
    printf("Enter the target number: ");
    scanf("%f", &target);
    
    int result = binarySearchFloat(arr, n, target);
    if (result != -1) {
        printf("Element %f found at index %d\n", target, result);
    } else {
        printf("Element %f not found\n", target);
    }
    
    return 0;
}
