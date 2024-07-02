#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *start = NULL; 

void print() {
    if (start == NULL) {
        printf("NULL\n");
        return;
    }
    struct node *temp = start;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n"); 
}

struct node* getnode(int item) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1); 
    }
    new_node->data = item;
    new_node->link = NULL;
    return new_node; 
}

void insert(int item) {
    struct node *ptr = getnode(item);
    ptr->link = start;
    start = ptr;
}

int insert_any_position(int item, int position) {
    if (position == 1) {
        insert(item);
        return 1;
    }
    
    struct node *current = start;
    int counter = 1;

    while (current != NULL) {
        
    if (position==counter) {
        struct node *ptr = getnode(item);
        ptr->link = current->link;
        current->link = ptr;
        return 1;
    }
        current = current->link;
        counter++;

    }
    if(position>counter-1){
        return 0;
    }
}

int main() {
    insert(45);
    insert(78);
    insert(100);
    insert(10);
    insert(89);
    insert(23);
    insert(14);
    printf("Before insert:\n");
    print();
    printf("After insert :\n");
   int x= insert_any_position(200, 2);
   if(x==0){
    printf("position not found\n");
   }
   else{
    print();
   }
    return 0;
}
