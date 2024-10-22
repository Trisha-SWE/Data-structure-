/*Name : Reduan Ahmad
  ID : 232-35-016
  Section : A2
  Problem : How to Delete a specific element in the array. 
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
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Enter the index number which want to delete : ");
    scanf("%d",&index);

    if(index<0 || index >=size){
        perror("Invalid index!");
        return -1;
    }

    for(int i = index-1 ; i < size - 1 ; i++){
        arr[i] = arr[i+1];
    }
    size--;
    printf("\n");
    printf("Array after deletion :");
    for(int i = 0; i < size ; i++){
        printf("%d ",arr[i]);
    }

}