#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


void deleteElement(struct Node** head, int key) {
    struct Node* temp = *head;
    struct Node* prev = NULL;

    
    if (temp != NULL && temp->data == key) {
        *head = temp->next;  
        free(temp);         
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }


    if (temp == NULL) {
        printf("Element not found\n");
        return;
    }

    
    prev->next = temp->next;
    free(temp);
}

// Function to display the linked list
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
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 3;
    head->next->next->next = NULL;

    
    printf("Original List:\n");
    display(head);

   
    deleteElement(&head, 2); // Delete element 2

    
    printf("Updated List:\n");
    display(head);

    return 0;
}
