#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void insert(int value,int pos)
{
    struct node *newnode,*temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
        return ;

    }
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

}
void traverse()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main()
{
    int n,value,pos;
    struct node *newnode,*temp;
    printf("Enter value of nodes=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data=%d\n",i);
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
    }
    printf("enter value=");
    scanf("%d",&value);
    printf("enter position=");
    scanf("%d",&pos);
    insert(value,pos);
    printf("Enter linked list=");
    traverse();
    return 0;
}


