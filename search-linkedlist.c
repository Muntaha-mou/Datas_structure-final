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
void search(int key)
{
    struct node *temp=head;
    int pos=1;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            printf("found at=%d\n",pos);
            return;
        }
        else
        {
            temp=temp->next;
            pos++;
        }
    }
    printf("Not found");

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
    int val,n,key;
    printf("node number=");
    scanf("%d",&n);
    printf("node values=");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&val);
        append(val);
    }
    scanf("%d",&key);
    search(key);
    traverse();
    return 0;

}
