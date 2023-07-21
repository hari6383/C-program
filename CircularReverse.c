#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}
*head,*temp,*newnode;
int main()
{
    int n,i,count=0;
    printf("enter count: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
            temp->next=head;

        }
    }

    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->next);
    return 0;
}


