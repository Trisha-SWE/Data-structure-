#include<stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9};

    int size = 9;
    int value,pos,count=0;

    printf("The array is : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\nEnter the value do you want to delete ? : ");
    scanf("%d",&value);

    for(int i=0;i<size;i++){
        if(value ==arr[i]){
            break;
        }
        count++;
    }

    for(int i =count;i<size-1;i++){
        arr[i] = arr[i+1]; 
    }

    size --;

    printf("Array after deletion: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;

}