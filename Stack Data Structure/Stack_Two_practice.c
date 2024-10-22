#include <stdio.h>
#define MAXSIZE 4

void pus(void);
void pop(void);
void display(void);

struct Stack
{
    int stk[MAXSIZE];
    int top;
};

typedef struct Stack STACK;
STACK s;

void main()
{
    int choise;
    int option = 1;
    s.top = -1;

    while (option)
    {
        printf("--------------------------\n");
        printf("1 --> PUS\n");
        printf("2 --> POP\n");
        printf("3 --> DISPLAY\n");
        printf("4 --> Exit\n");
        printf("--------------------------\n");

        printf("Enter your choise : ");
        scanf("%d", &choise);

        switch (choise)
        {
        case 1:
            pus();
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

        printf("Do you want to continue ? (yes press 1 or NO press 0)");
        scanf("%d", &option);
    }
}

void pus()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf("Stack is full \n");
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
    if (s.top == -1)
    {
        printf("Stake is empty \n");
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
        printf("Stake is Empty \n");
        return;
    }
    else
    {
        for (int i = s.top; i >= 0; i--)
        {
            printf(" %d ", s.stk[i]);
        }
    }
    printf("\n");
}
