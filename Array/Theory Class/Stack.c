#include <stdio.h>
#define MAXSIZE 4
struct Stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct Stack STACK;
STACK s;

void push(void);
void pop(void);
void display(void);

void main()
{
    int chose;
    int option = 1;
    s.top = -1;

    while (option)
    {
        printf("----------------------------------\n");
        printf("1 --> PUSH\n");
        printf("2 --> POP\n");
        printf("3 --> DISPLAY \n");
        printf("4 --> EXIT \n");
        printf("----------------------------------\n");

        printf("Enter your choice :");
        scanf("%d", &chose);

        switch (chose)
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

        fflush(stdin);
        printf("Do you want to continue (Type 0 or 1 ):");
        scanf("%d", &option);
    }
}

void push()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf("Stack is full\n");
        return;
    }
    else
    {
        printf("Enter the element to be pushed : ");
        scanf("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}

void pop()
{
    int num;
    if (s.top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }
    else
    {
        printf("poped element is = %d \n", s.stk[s.top]);
        s.top = s.top - 1;
    }
}

void display()
{

    if (s.top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    else
    {
        printf("The status of the stack is ");
        for (int i = 0; i < s.top; i++)
        {
            printf(" %d ", s.stk[i]);
        }
    }
    printf("\n");
}