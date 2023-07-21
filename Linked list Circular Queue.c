#include<stdio.h>
#include<stdlib.h>

void insert();

struct node
{

    int data;
    struct node* next;

}* last;

void insert()
{
    int n,i,data,val;
    printf("enter count: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newNode->data);
    if(newNode==NULL)
    {
        printf("out of memory");
        return;
    }
    newNode -> data = val;
    if(last == NULL)
    {
        newNode -> next = newNode;
        last = newNode;
    }
    else
    {
        newNode -> next = last -> next;
        last -> next = newNode;
    }
}

int main()
{
    void insert();
}
