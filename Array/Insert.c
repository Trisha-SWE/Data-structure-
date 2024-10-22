#include <stdio.h>
int main()
{
    int array[10] = {1, 2, 3, 4, 5};
    int element, position;

    int size = 5;

    printf("Enter the element to insert : ");
    scanf("%d", &element);

    printf("Enter the index to insert the element (between 0 to %d): ", size);
    scanf("%d", &position);

    if (position < 0 || position > size)
    {
        printf("Inviled index!");
        return -1;
    }
    for (int i = size; i > position; i--)
    {
        array[i] = array[i - 1];
    }

    array[position] = element;
    size++;

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
