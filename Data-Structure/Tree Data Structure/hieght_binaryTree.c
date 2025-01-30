#include<stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *left;
    char data;
    struct Node *right;
};
struct Node *createTree()
{
    int add,x;

    printf("DO you want to add a node?(0 for no 1 for yes) :");
    scanf("%d",&add);
    if(!add)
    {
        return NULL;
    }
    else
    {
        struct Node*temp = malloc(sizeof(struct Node));
        printf("Enter the data :");
        scanf("%d",&x);
        temp->data=x;
        printf("As the left child of %d\n",temp->data);
        temp->left = createTree(temp->left);
        printf("As the right child of %d \n:",temp->data);
        temp->right = createTree(temp->right);
        return temp;
    }
}
int heightBT(struct Node *root)
{
    int leftHeight,rightHieght;
    if(root == NULL)
        return 0;
    if(root->left ==NULL &&root->right ==NULL)
        return 0;
    leftHeight =heightBT(root->left);
    rightHieght =heightBT(root->right);
    if(leftHeight>rightHieght)
        return leftHeight+1;
    else
        return rightHieght+1;
}
int main()
{
    struct Node * root =  NULL;
    root = createTree();
    int height = heightBT(root);
    printf("Height of a given Binary Tree = %d\n",height);
    return 0;
}