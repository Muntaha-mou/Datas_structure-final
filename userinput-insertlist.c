#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void append(int value)
{
    struct node *newnode,*temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}
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
        return;
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
    printf("NULL\n");
}
int main()
{
  int n,val,value,pos;
  printf("Enter node=");
  scanf("%d",&n);
  printf("enter values=");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&val);
      append(val);

  }
  scanf("%d",&value);
  scanf("%d",&pos);
  insert(value,pos);
    traverse();
    return 0;

}

