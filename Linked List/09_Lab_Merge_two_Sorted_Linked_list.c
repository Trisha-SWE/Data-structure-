#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* mergeSortedLists(struct Node* l1, struct Node* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    
    if (l1->data < l2->data) {
        l1->next = mergeSortedLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeSortedLists(l1, l2->next);
        return l2;
    }
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
    struct Node* l1 = (struct Node*)malloc(sizeof(struct Node));
    l1->data = 1;
    l1->next = (struct Node*)malloc(sizeof(struct Node));
    l1->next->data = 3;
    l1->next->next = NULL;
    
    struct Node* l2 = (struct Node*)malloc(sizeof(struct Node));
    l2->data = 2;
    l2->next = (struct Node*)malloc(sizeof(struct Node));
    l2->next->data = 4;
    l2->next->next = NULL;

    struct Node* mergedList = mergeSortedLists(l1, l2);
    display(mergedList);
    
    return 0;
}
