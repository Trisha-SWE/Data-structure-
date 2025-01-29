#include <stdio.h>

int BinarySearch(int arr[], int left, int right, int item) {
    if (left > right) {
        return -1; 
    }
    int mid = (left + right) / 2;
    if (arr[mid] == item) {
        return mid; 
    } else if (item > arr[mid]) {
        return BinarySearch(arr, mid + 1, right, item);
    } else {
        return BinarySearch(arr, left, mid - 1, item);
    }
}
int main() {
    int arr[] = {0,1,2,5,6,7,8,9,10};
    int item, left = 0, right = (sizeof(arr) / sizeof(arr[0])) - 1; 
    printf("Enter item to find: ");
    scanf("%d", &item);
    int result = BinarySearch(arr, left, right, item);
    if (result != -1) {
        printf("item Found!\n");
        printf("Index of the item is %d\n", result); 
    } else {
        printf("team not found!\n");
    }
    return 0;
}