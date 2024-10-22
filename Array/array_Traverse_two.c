#include<stdio.h>
int main(){
    int arr[]= {1,5,6,8,7,54,5,556,56,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<len ; i++){
        printf("%d ",arr[i]);
    }
}