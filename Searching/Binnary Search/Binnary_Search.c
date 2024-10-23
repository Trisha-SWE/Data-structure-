#include <stdio.h>
/*Rukaiya Akter Trisha
Id:232-35-292
19/09/2024*/
int binnary_search(int arr[], int size, int target)
{
    int left = 0, right = size - 1;

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
void sorted_the_array(int arr[], int size)
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
}

int main()
{
    int size, target;
    printf("Enter array size :");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the element of the array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Your entered array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sorted_the_array(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element to search : ");
    scanf("%d", &target);
    int result = binnary_search(arr, size, target);

    if (result != -1)
    {
        printf("Element %d found at index %d \n", target, result);
    }
    else
    {
        printf("Element %d not found in the array \n", target);
    }
}