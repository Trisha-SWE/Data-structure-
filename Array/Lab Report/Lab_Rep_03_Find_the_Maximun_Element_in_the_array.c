/*Name : Reduan Ahmad
  ID : 232-35-016
  Section : A2
  Problem : Find the Maximun element in the array.
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
    
    int max = arr[0];
    for(int i = 0; i < size ; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    printf("The maximun element in the arr : %d",max);

}