#include <stdio.h>   
int stack[100],i,j,choice=0,n,top=-1;  
void push();  
void pop();  
void show();  
int main ()  
{  
      
push();
show();
   return 0;
}   
  
void push ()  
{  
    printf("phus stack in data....");
    int value;
    scanf("%d",&value);
    
    if (top == value-1 )   
    printf("\n Overflow");   
    
    else   
    {   
        printf("Enter the value..."); 
int val;
        for(int i=0;i<value;i++){ 
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;  
        } 
    }   
}   
  
void pop ()   
{   
    if(top == -1)   
    printf("Underflow");  
    else  
    top = top -1;   
}   
void show()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}  