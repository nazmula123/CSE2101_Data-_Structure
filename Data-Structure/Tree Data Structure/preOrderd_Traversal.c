#include<stdio.h>
#include<stdlib.h>
#define max 100
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
struct node* stack[max];
int top =-1;
int isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}
void push(struct node *ptr)
{
    if(top == max-1)
    {
        printf("Stack Overflow!\n");
        exit(1);
    }
    top++;
    stack[top] = ptr;
}
struct node* pop()
{
    struct node*ptr;
    if(top==-1)
    {
        printf("Stack Underflow!\n");
        exit(1);
    }
    ptr = stack[top];
    top--;
    return ptr;
}

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

void preorder(struct node *root)
{
       struct node*ptr = root;
 if(ptr ==NULL)
 {
     printf("It is an empty binary tree!\n");
     exit(1);
 }
 push(ptr);
 while(!isEmpty())
 {
     ptr = pop();
     printf("%d ",ptr->data);
     if(ptr->right !=NULL)
        push(ptr->right);
        if(ptr->left !=NULL)
        push(ptr->left);
 }
}
int main()
{
    struct node *root;
    root =createTree();
    preorder(root);
    return 0;
}