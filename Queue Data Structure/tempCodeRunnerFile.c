
#include <stdio.h>
#define max 8
int queue[max];
int front = -1, rear = -1;

void add()
{
    int a;
    if (rear == max - 1)
    {
        printf("Overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
       
        front = rear = 0;
        printf("Enter Data to insert:");
        scanf("%d", &a);
        queue[rear] = a;
        printf("Data %d Inserted\n", a);
    }
    else
    {
        rear++;
        printf("Enter Data to insert:");
        scanf("%d", &a);
        queue[rear] = a;
        printf("Data %d Inserted\n", a);
    }
}

void delete()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {

        printf("Element %d Deleted.\n", queue[front]);
        front++;
    }
}

void view()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty!");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d, ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int n, choice=1;
    while (choice)
    {
        printf("What do you want to do?\n\n");
        printf("1. Add to queue.\n");
        printf("2. Delete From queue.?\n");
        printf("3. View Queue Element.?\n");
        printf("Enter Selection: ");
        scanf("%d", &n);
        getchar();
        fflush(stdin);
        switch (n)
        {
        case 1:
            add();
            break;
        case 2:
            delete ();
            break;
        case 3:
            view();
            break;
        default:
            printf("Enter a valid option.\n");
            break;
        }
        printf("Do you want to continue [0/1]: ");
        scanf("%d", &choice);
        getchar();
        fflush(stdin);
    }
} 