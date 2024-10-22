#include <stdio.h>

void findSmallestElement(int arr[], int n) {
    int smallest = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("Smallest element is %d\n", smallest);
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    findSmallestElement(arr, n);
    
    return 0;
}
