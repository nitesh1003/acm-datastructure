#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

Node *input(Node* head, int d)
{

}

int main()
{
    int n;

    Node *head = NULL;
    cout<<"Enter the number of elements in a list : "<<endl;
    cin>>n;
    cout<<"Enter Elements: "<<endl;
    int temp;
    cin>>temp;

    head = new Node();
    head->data = temp;
    head->next = NULL;

    for(int i=0 ; i<n-1; i++)
    {
        cin>>temp;
        head = input(head,temp);
    }
}
