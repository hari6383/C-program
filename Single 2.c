//Stack Array List

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE];
int top=-1;

void push();

void push()
{
    int i,count,data;
    printf("Enter Count");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        scanf("%d",&data);
        if(top==SIZE-1)
        {
            printf("Stack is Empty");
        }
        else
        {
            top++;
            stack[top]=data;
        }
    }

}

void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
   /* while(top!=SIZE-1)
    {
        printf("%d",stack[top]);
        top++;
    }*/
}

int main()
{
    push();
    display();
}
