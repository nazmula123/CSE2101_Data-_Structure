#include<stdio.h>
#include<stdlib.h>
char tree[100];
void root(char c)
{
    if(tree[0] !='\0')
    {
        printf("The Root already exceed!\n");
        exit(1);
    }
    else
    {
        tree[0] = c;
    }
}
void left (char c ,int parent)
{
    if(tree[parent] =='\0')
        printf("The Parent of %c does not exceed so cann't insert %c\n");
    else
    {
        tree[2*parent +1] = c;
    }
}
void right (char c ,int parent)
{
    if(tree[parent] =='\0')
        printf("The Parent of %c does not exceed so cann't insert %c\n",c,c);
    else
    {
        tree[2*parent +2] = c;
    }
}
void print()
{
    int i;
    for(i=0;i<5;i++)
    {
        if(tree[i]=='\0')
            printf("* ");
        else
            printf("%c ",tree[i]);
    }
}
int main()
{
    root('D');
    left('E',0);
    right('W',0);
    right('Q',1);
    left('G',1);
    print();
    return 0;
}