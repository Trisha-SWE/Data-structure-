#include <stdio.h>
#include <stdlib.h>

struct Node {
    char data;
    struct Node* next;
    struct Node* prev;
};

int main() {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    struct Node* newNode = NULL;
    char ch;
    int choice = 1;

    while (choice) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter a character: ");
        scanf(" %c", &newNode->data);
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head != NULL) {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        } else {
            head = temp = newNode;
        }

        printf("Do you want to add another element? (0 to stop, 1 to continue): ");
        scanf("%d", &choice);
    }

    printf("Before deletion:\nList elements: ");
    temp = head;
    while (temp != NULL) {
        printf("%c ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    if (head != NULL) {
        temp = head;
        head = head->next;

        if (head != NULL) {
            head->prev = NULL;
        }

        free(temp);
    }

    printf("After deletion:\nList elements: ");
    temp = head;
    while (temp != NULL) {
        printf("%c ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
