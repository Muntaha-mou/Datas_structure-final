#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 5
int Queue[MAX_SIZE];
int Front=-1;
int rear=-1;
void enqueue(int value)
{
    if(rear==MAX_SIZE-1)
    {
        cout<<"Queue overflow!"<<endl;
    }
    else
    {
        if(Front==-1)
        {
          Front=0;
        }
        rear++;
        Queue[rear]=value;
        cout<<value<<" enqueued"<<endl;
    }
}
void dequeue()
{
    if(Front==-1)
    {
        cout<<"Queue underflow!"<<endl;
    }
    else
    {
        cout<<Queue[Front]<<" dequeued"<<endl;
        Front++;
        if(Front>rear)
        {
            Front=-1;
            rear=-1;
        }
    }
}
void peek()
{
    if(Front==-1)
    {
        cout<<"Queue is empty!"<<endl;
    }
    else
    {
        cout<<"Front element= "<<Queue[Front]<<endl;
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
        for(int i=Front;i<=rear;i++)
        {
            cout<<Queue[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int choice,value;
    while(1)
    {
        cout<<endl;
        display();
        cout<<"Queue menue"<<endl;
        cout<<"1.Enqueue"<<endl;
        cout<<"2.Dequeue"<<endl;
        cout<<"3.Peek"<<endl;
        cout<<"4.Display"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter choice=";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter value=";
            cin>>value;
            enqueue(value);
            break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout<<"Program ended"<<endl;
                return 0;
            default:
                cout<<"Invalid choice!"<<endl;

        }
    }
    return 0;
}

