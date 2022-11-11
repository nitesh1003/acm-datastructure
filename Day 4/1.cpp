#include <bits/stdc++.h>
using namespace std;

#define size 5

int linear_queue[size];
int front=0;
int rear=0;

bool isfull()
{
    if(rear == size)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isempty()
{
    if(front == rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void EnQueue(int data)
{
    if(isfull())
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
        linear_queue[rear]=data;
        rear++;
    }
}

void Dequeue()
{
    if(isempty())
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        cout<<"Deleted element: "<<endl;

        int del_element = linear_queue[front];

        cout<< del_element<<endl;

        front++;

        if(front==rear)
        {
            front=0;
            rear=0;
        }
    }
}

void front_element()
{
    if(isempty())
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        cout<<"Front element is : "<<endl;
        cout<<linear_queue[front]<<endl;
    }
}

void rear_element()
{
    if(isempty())
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        cout<<"Rear element is : "<<endl;
        cout<<linear_queue[rear-1]<<endl;
    }
}

void display()
{
    if (isempty())
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
        cout<<"Elements in Linear Queue: "<<endl;
        for(int i=front;i<rear;i++)
        {
            cout<<linear_queue[i];
        }
    }
}

int main()
{
    EnQueue(1);
    EnQueue(2);
    EnQueue(3);
    EnQueue(4);
    EnQueue(5);

    Dequeue();
    Dequeue();

    display();

    front_element();
    rear_element();

    cout<<"Queue is full"<<endl;
    EnQueue(6);
}
