#include <stdio.h>

int main() {
    int n, total_sum = 0, array_sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n-1];
    
    printf("Enter the elements: ");
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        array_sum += arr[i];
    }
    
    total_sum = n * (n + 1) / 2;
    
    printf("Missing number: %d\n", total_sum - array_sum);
    
    return 0;
}
