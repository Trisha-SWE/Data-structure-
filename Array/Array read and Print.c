#include<stdio.h>
int main(){
    int arr[]= {0,1,2,3,4,5,6,7,8,9,10};

    int len = sizeof(arr)/sizeof(arr[0]);
    printf("Array : ");
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
