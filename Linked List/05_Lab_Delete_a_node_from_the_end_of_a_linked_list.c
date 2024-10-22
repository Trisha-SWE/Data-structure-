#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void deleteFromEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty!\n");
        return;
    }

    struct Node* temp = *head;
    
    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }
    
    struct Node* prev;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    
    prev->next = NULL;
    free(temp);
}

void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = NULL;

    printf("Before deletion:\n");
    display(head);
    
    deleteFromEnd(&head);

    printf("After deletion:\n");
    display(head);
    
    return 0;
}
