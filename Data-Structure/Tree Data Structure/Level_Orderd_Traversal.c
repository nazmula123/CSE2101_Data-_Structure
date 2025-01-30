#include<stdio.h>
#include<stdlib.h>
#define max 100
struct node
{
    struct node *left;
    int data;
    struct node*right;
};
struct node *queue[max];
int front =-1,rear=-1;
int isEmpty()
{
    if(front ==-1 && rear == -1 || front == rear + 1)
        return 1;
    else
        return 0;
}
void enqueue(struct node *ptr)
{
    if(front ==max-1)
    {
        printf("Queue is Overflow!\n");
        exit(1);
    }
    if(front ==-1)
        front++;
    rear++;
    queue[rear] = ptr;
}
struct node*dequeue()
{
    if(front == -1 && rear ==-1 || front == rear+1)
    {
        printf("Queue Underflow!\n");
        exit(1);
    }
    struct node *ptr = queue[front];
    front++;
    return ptr;
};
struct node *createTree()
{
    int add;
    printf("Do you want to add a node(0 for no 1 for yes) :");
    scanf("%d",&add);
    if(!add)
    {
        return NULL;
    }
    else
    {
        struct node *temp=malloc(sizeof(struct node));
        int data;
        printf("Enter the data :");
        scanf("%d",&data);
        temp->data=data;
        printf("As The left child of %d\n",temp->data);
        temp->left= createTree();
        printf("As Right child of %d\n",temp->data);
        temp->right=createTree();
        return temp;
    }
};
void levelorder(struct node *root)
{
    struct node *ptr = root;
    enqueue(ptr);
    while(!isEmpty())
    {
        ptr=dequeue();
        printf("%d ",ptr->data);
        if(ptr->left !=NULL)
            enqueue(ptr->left);
        if(ptr->right !=NULL)
            enqueue(ptr->right);
    }

}
int main()
{
    struct node *root;
    root =createTree();
    levelorder(root);
}