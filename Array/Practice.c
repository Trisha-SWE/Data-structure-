#include <stdio.h>
int main()
{
    int n;
    printf("Enter the array size : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the array element :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }

    // printf("Sum of all element : %d\n", sum);
    return 0;
}