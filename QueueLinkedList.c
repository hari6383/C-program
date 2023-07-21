#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void peek();
void display();

struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL,*newnode,*temp;

int main()
{
    int option;
    while(1)
    {
        printf("\n\n***Queue Linked List***\n\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter your Choice:(1,2,3,4,5)\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        }
    }
}

void enqueue()
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
        if(front==NULL&&rear==NULL)
        {
           front=rear=newnode;
        }
        else
        {
            rear->next=newnode;
            rear=newnode;
        }
    }
}

void dequeue()
{
    temp=front;
    if(front==NULL&&rear==NULL)
    {
        printf("Queue Empty");
    }
    else
    {
        printf("%d is Deleted",front->data);
        front=front->next;
        free(temp);
    }
}

void peek()
{
   if(front==NULL&&rear==NULL)
    {
        printf("Queue Empty");
    }
     else
    {
        printf("The front Element is:%d",front->data);
    }

}

void display()
{
   if(front==NULL&&rear==NULL)
   {
       printf("Queue is Empty");
   }
   else
   {
       temp=front;
       while(temp!=NULL)
       {
           printf(temp->data);
           temp=temp->next;
       }
   }
}

