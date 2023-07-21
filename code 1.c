#include <stdio.h>
#include <conio.h>

struct node{
    int data;
    struct node*next;
}
*head,*temp,*newnode;

int main()
{
    int n,i,count=0;
    printf("Enter count");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode= (struct node*) malloc (sizeof(struct node));
        printf("Enter data: ");
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
            temp=newnode;
        }
        temp=head;

        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
            count++;
        }

    }


}
