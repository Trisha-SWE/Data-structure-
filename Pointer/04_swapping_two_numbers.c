#include<stdio.h>
int main(){
    int x = 10, y = 20;

    int *ptr1,*ptr2,*temp;

    ptr1 = &x;
    ptr2 = &y;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("X = %d\n",*ptr1);
    printf("Y = %d\n",*ptr2);

}