#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
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
int isFullBinaryTree(struct node *root)
{
    int left ,right;
    struct node *temp=root;
    if(temp==NULL)
    {
        return 1;
    }
   else if(temp->left ==NULL && temp->right ==NULL)
    {
        return 1;
    }
    else if((temp->left) != NULL && (temp->right) != NULL)
    {
        left= isFullBinaryTree(temp->left);
        right = isFullBinaryTree(temp->right);
        return (left && right);
    }
    else{
        return 0;
    }
}
int main()
{
    int x;
    struct node *root;
    root =createTree();
   x = isFullBinaryTree(root);
   if(x)
    printf("YES\n");
   else
    printf("NO\n");
    return 0;
}