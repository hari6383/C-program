#include<stdio.h>
#include<stdlib.h>

//Stack Linked List

void push();
void display();
void peek();
void pop();

struct node{
    int data;
    struct node *next;
}*top=NULL,*temp,*newnode;

void push()
{
    int i,count;
    printf("Enter count:");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=top;
        top=newnode;
    }
}

void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

void peek()
{
    temp=top;
    printf("\nPeek Data ");
    printf("%d\n",top->data);
}

void pop()
{
    temp=top;
    if(top==NULL)
    {
        printf("Nothing");
    }
    else
    {
       printf("%d is deleted",temp->data);
       top=temp->next;
       free(temp);
    }
}


int main()
{
    push();
    display();
    peek();
    pop();
}
