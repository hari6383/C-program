#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];


void insert();
void deletee();
void peek();
void display();



int main()
{
    int option;
    while(1)
    {
        printf("\n\n***Queue Array List***\n\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter your Choice:(1,2,3,4,5)\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            insert();
            break;
        case 2:
            deletee();
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

void insert()
{
    int n,i,num,data;
    printf("enter count: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter data:");
        scanf("%d",&data);
        if(rear=max-1)
        {
          printf("Queue is Full");
        }
        else if (front==-1&&rear==-1)
        {
            printf("Enter a number to Insert");
            scanf("%d",&num);
            queue[rear]=num;
        }
        else{
            rear++;
            printf("New Number");
            scanf("%d",&num);
            queue[rear]=num;

        }
    }
}

void deletee()
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


