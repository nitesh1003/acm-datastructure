#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

int main()
{
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;

    head = new Node();
    first = new Node();
    second = new Node();

    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = NULL;
    return 0;
}
