#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
};
struct Node *createTree()
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
        struct Node *temp=malloc(sizeof(struct Node));
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
void inorder(struct Node *root)
{
    if(root == NULL)
    {
        return;
    }
     inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
int main()
{
    struct Node *root;
    root =createTree();
    printf("The Inorder traversal result = ");
    inorder(root);
    return 0;
}