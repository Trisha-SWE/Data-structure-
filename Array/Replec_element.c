#include<stdio.h>
int main(){
    int a[10];
    int size = 5;
    int element,pos;

    printf("Enter array element : ");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter array element : ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }


    printf("\nEnter the value that you want to insert : ");
    scanf("%d",&element);

    printf("\nEnter the position that you want to insert : ");
    scanf("%d",&pos);

    a[pos] = element;

    printf("After insert the value array is  : ");
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }

    printf("\n");

    return 0;


}