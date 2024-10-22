/*Name : 
  ID : 232-35
  Section : A2
  Problem : How to replace a specific element in the array. 
*/
#include<stdio.h>
int main(){
    int size,index,element;
    printf("Enter the array size : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the element :");
    for(int i = 0; i < size ; i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is :");
    for(int i = 0; i < size ; i++){
        printf("%d",arr[i]);
    }
    printf("\n");

    printf("Enter the index number which want to replaec : ");
    scanf("%d",&index);
    printf("Enter the element which want to insert :");
    scanf("%d",&element);

    arr[index] = element;
    printf("\n");
    printf("New array after replace element :");
    for(int i = 0; i < size ; i++){
        printf("%d ",arr[i]);
    }

}