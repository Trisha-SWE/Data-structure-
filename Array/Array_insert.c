#include<stdio.h>
int main(){
    int arr[10] = {4,6,2,9,8,26,29,21};
    int size = 8;
    int pos = 5;
    int element = 100;

    for(int i = size ; i>pos ; i--){
        arr[i] = arr[i-1];
    }

    arr[pos] = element;
    size++;

    for(int i = 0 ;i< size ; i++){
        printf("%d ",arr[i]);
    }
}