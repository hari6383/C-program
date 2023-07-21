#include<stdio.h>
#include<stdlib.h>

void create();
void display();

struct node
{
    int data;
    struct node *next;
    struct node *prev;

}
*head,*temp,*newnode;

int main()
{
    int option;
    while(1)
    {
        printf("\n\n***Doubly Linked List***\n\n");
        printf("1.Create\n");
        printf("2.Display\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        }
    }
}

void create()
{
    int n,i;
    printf("enter count: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=temp->next;
        }
    }
}

void display()

{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);

        temp=temp->next;
    }
    printf("\nprinted from head to temp\n");
    temp=temp->prev;
    printf("%d ",temp->data);
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
}


