#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 5
int Queue[MAX_SIZE];
int Front=-1;
int rear=-1;
void enqueue(int value)
{
    if((rear+1)%MAX_SIZE==Front)
    {
        cout<<"Queue overflow!"<<endl;
    }
    else
    {
        if(Front==-1)
        {
            Front=0;
            rear=0;
        }
        else
        {rear=(rear+1)%MAX_SIZE;}
        Queue[rear]=value;
        cout<<value<<"enqueued"<<endl;
    }
}
void dequeue()
{
    if(Front==-1)
    {
        cout<<"Queue is underflow"<<endl;
    }
    else
    {
        cout<<Queue[Front]<<"dequeue"<<endl;

        if(Front==rear)
        {
            Front=-1;
            rear=-1;
        }
        else{
            Front=(Front+1)%MAX_SIZE;
        }
    }
}
void peek()
{
    if(Front==-1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Front element="<<Queue[Front]<<endl;
    }
}
void display()
{
    if(Front==-1)
    {
          cout<<"Queue is empty!"<<endl;
    }
    else
    {
        cout<<"Queue=";
        for(int i=Front;i<=rear;i=(i+1)%MAX_SIZE)
        {
            cout<<Queue[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    peek();
    display();
    return 0;
}
