#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max];
int front=-1;
int rear=-1;

void enqueue();
void dequeue();
void display();

int main()
{
    int option;
    while(1)
    {
        printf("\n\n***Array Circular Queue***\n\n");
        printf("1.Enqueue\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your Choice:(1,2,3,4)\n");
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
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
}

void enqueue()
{
    int n,i,element,data;
    printf("enter count: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("enter data:");
        scanf("%d",&data);
        if(front==-1&&rear==-1)
        {
            front=0;
            rear=0;
            queue[rear]=data;
        }
        else if((rear+1)%max==front)
        {
            printf("Queue is Overflow");
        }
        else
        {
            rear=rear+1%max;
            queue[rear]=data;
        }
     }
}

void dequeue()
{
    if((front==-1)&&(rear==-1))
    {
        printf("Queue is Underflow");
    }
    else if(front==rear)
    {
        printf("Deleted Element is %d",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("Dequeued Element is %d",queue[front]);
        front=(front+1)%max;
    }
}

void display()
{
    if(front==-1&&rear==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Elements are\n");
        while(front!=rear)
        {
            printf("%d",queue[front]);
            front=(front+1)%max;
        }
        printf("%d",queue[front]);
    }
}


