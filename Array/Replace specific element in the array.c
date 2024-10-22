#include<stdio.h>
int main(){
    int arr[]= {0,1,2,3,4,5,6,7,8,9,10};
    int pos,ins;

    /*Reduan Ahmad*/
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("Array : ");
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Which position element do you want to replace ? :");
    scanf("%d",&pos);
    printf("\n");
    printf("%d position which value do you want to insert ? :");
    scanf("%d",&ins);

    arr[pos]=ins;
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
