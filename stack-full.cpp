#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 5
int Stack[MAX_SIZE];
int top=-1;
void push(int value)
{
    if(top==MAX_SIZE-1)
    {
        cout<<"Stack overflow!"<<endl;
    }
    else
    {
        top++;
        Stack[top]=value;
        cout<<value<<"Pushed"<<endl;
    }
}
void pop()

{
    if(top==-1)
    {
        cout<<"stack underflow!"<<endl;
    }
    else
    {
        cout<<Stack[top]<<"popped"<<endl;
        top--;
    }
}
void peek()
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"top element="<<Stack[top]<<endl;
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"Stack is empty!"<<endl;
    }
    else
    {
        cout<<"stack=";
        for(int i=0;i<=top;i++)
        {
            cout<<Stack[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int choice,value;
    while(true)
    {
        cout<<endl;
        display();
        cout<<"stack menue"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.peek"<<endl;
        cout<<"4.display"<<endl;
        cout<<"5.exit"<<endl;
        cout<<"Enter choice=";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter value=";
            cin>>value;
            push(value);
            break;
        case 2:
            pop();
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

