#include <stdio.h>

void sorted_array(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The sorted array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int binary_search(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}
int main()
{
    int size, target;
    printf("Enter the size of array : ");
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

    sorted_array(arr, size);
    printf("\n");

    printf("Enter the element to search : ");
    scanf("%d", &target);

    int result = binary_search(arr, size, target);

    if (result != -1)
    {
        printf("Element %d found at index %d", target, result);
    }
    else
    {
        printf("Element %d is not found ", target);
    }
}