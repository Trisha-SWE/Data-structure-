#include <stdio.h>

int linear_search(int arr[], int target, int size)
{
    int found = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
            found++;
        }
    }

    if (found == 0)
    {
        return -1;
    }
}

int main()
{
    int size, target;
    printf("Enter the array size : ");
    scanf("%d", &size);

    printf("Enter the array element : ");
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Your array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to search : ");
    scanf("%d", &target);

    int result = linear_search(arr, target, size);

    if (result != -1)
    {
        printf("Element %d found at index %d", target, result);
    }
    else
    {
        printf("Element %d is not found ", target);
    }
}