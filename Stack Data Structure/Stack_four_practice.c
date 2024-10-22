#include <stdio.h>
#define MAX 4

void push(void);
void pop(void);
void display(void);

struct Struct
{
    int stk[MAX];
    int top;
};
typedef struct Struct STACK;
STACK s;

void main()
{
    int option = 1;
    int choice;
    s.top = -1;

    while (option)
    {
        printf("1. Push.\n2. Pop.\n3. Display.\n4.Exit\nEnter What do you want: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return;
        }

        printf("Do you continue this program (Yes press 1 or NO press 0)");
        scanf("%d",&option);
    }
}

void push()
{
    int num;
    if (s.top == (MAX - 1))
    {
        printf("The Stack is full ! ");
        return;
    }
    else
    {
        printf("Enter the number which want to push : ");
        scanf("%d", &num);

        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}

void pop(){
    if(s.top == -1){
        printf("Stack is empty!");
        return;
    }else{
        printf("Poped number is %d: ",s.stk[s.top]);
        s.top = s.top-1;
    }
    
}

void display(){
    if(s.top ==  -1){
        printf("Stack is empty!");
        return;
    }else{
        for(int i = 0 ; i<=s.top ;i++){
            printf(" %d ",s.stk[i]);
        }
    }
    printf("\n");

}