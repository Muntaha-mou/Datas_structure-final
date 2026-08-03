#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void dltnode(int pos)
{
    struct node *temp=head,*ptr;
    if(pos==1)
    {
        head=head->next;
        free(temp);
        return;
    }
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    ptr=temp->next;
    temp->next=ptr->next;
    free(ptr);
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
    struct node *n1,*n2,*n3;
    int pos;
    head=(struct node*)malloc(sizeof(struct node));
    n1=(struct node*)malloc(sizeof(struct node));
    n2=(struct node*)malloc(sizeof(struct node));
    n3=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=n1;
    n1->data=20;
    n1->next=n2;
    n2->data=30;
    n2->next=n3;
    n3->data=40;
    n3->next=NULL;
    printf("Enter position=");
    scanf("%d",&pos);
    dltnode(pos);
    printf("Enter list=");
    traverse();
    return 0;


}
