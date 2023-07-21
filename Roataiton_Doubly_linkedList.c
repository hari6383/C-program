#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
}*head,*temp,*tail,*newnode;

int main()
{
  int n,i;
  printf("Enter Size");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    newnode = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
      newnode->prev=head;
      head=newnode;
      temp=newnode;
    }
    else
    {
      newnode->prev=temp;
      temp->next=newnode;
      temp=newnode;
    }
    tail=temp;
    tail->next=head;
    head->prev=tail;
  }
    head=tail;
    tail=tail->prev;

  temp=head;
  do
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }while(temp!=head);
  return 0;
}
