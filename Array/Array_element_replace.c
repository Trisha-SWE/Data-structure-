#include<stdio.h>
int main(){
    int arr[]= {1,5,6,8,7,54,5,556,56,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sc,pos;
    printf("Enter position do you want to insert : ");
    scanf("%d",&pos);
    printf("Enter element for the insert : ");
    scanf("%d",&sc);

    arr[pos] = sc ;
    for(int i = 0; i<len ; i++){
        printf("%d ",arr[i]);
    }
}