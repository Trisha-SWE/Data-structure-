#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int pos;

    printf("Enter the index of the element to delete : ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= size)
    {
        perror("Invalid index !");
        return -1;
    }

    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }


    return 0;
}