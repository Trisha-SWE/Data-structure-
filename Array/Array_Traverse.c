#include<stdio.h>
int main(){
    int arr[] = {2,6,8,4,5,6,2,1,5,5};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}