#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *head = NULL;

struct node* getNode(int item) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = item;
    newNode->next = newNode;
    return newNode;
}

void traverse() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *ptr = head;
    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}

void insert(int item) {
    struct node *newNode = getNode(item);
    if (head == NULL) {
        head = newNode;
    } else {
        struct node *ptr = head;
        while (ptr->next != head) {
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->next = head;
    }
}

int search(int data) {
    if (head == NULL) {
        return -1;
    }

    struct node *ptr = head;
    int c = 1;
    do {
        if (data == ptr->data) {
            return c;
        }
        ptr = ptr->next;
        c++;
    } while (ptr != head);
    return -1;
}

int main() {
    insert(58);
    insert(15);
    insert(57);
    insert(12);
    insert(23);
    insert(15);
    traverse();
    int position = search(12);
    if (position == -1) {
        printf("Data not found\n");
    } else {
        printf("Data found at position: %d\n", position);
    }
    return 0;
}
