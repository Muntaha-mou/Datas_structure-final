#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void search(int key)
{
    struct node *temp=head;
    int pos=1;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            printf("Elements found at=%d\n",pos);
            return;
        }
        temp=temp->next;
        pos++;
    }
    printf("Not found");
}
void traverse()
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");
}
int main()
{
    int n,i,key;
    printf("Number of node=");
    scanf("%d",&n);
    struct node *newnode,*temp;

    for(i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter node value=%d\n",i);
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
    printf("Enter search value=");
    scanf("%d",&key);
    search(key);
    printf("Linked list=");
    traverse();
    return 0;
}
