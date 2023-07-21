#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*head,*temp,*tail,*nextnode,*curr;

void create()
{
    int n;
    scanf("%d",&n);
    while(n-->0)
    {
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }

    }
}

void count()
{
    int five,ten,twe=0,res1=0,res2=0;
    temp=head;

    while(temp!=NULL)
    {
        if(temp->data==5)
        {
            five++;
            temp=temp->next;
        }
        else if(temp->data==10)
        {
            ten++;
            if(five>=1)
            {
                five--;
                res1++;
            }

            temp=temp->next;
        }
        else if(temp->data==20) {

        twe++;
        if((five>=1 && ten>=1)||(five>=3)){
             if((five>=1 && ten>=1)){
                five--;
                ten--;
                res2++;
             }
             else if((five>=3)){
                five=five-3;
                res2++;
             }

        }
        temp=temp->next;
        }
    }
    if(res1>0&&res2>0){
        printf("%s","True");
    }
    else{
        printf("%s","False");
    }
}




int main()
{
    create();
    count();
}
