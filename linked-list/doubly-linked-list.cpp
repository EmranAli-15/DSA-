#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node* prev = NULL;
    int data;
    Node* next = NULL;
};

int main()
{
    Node* head = new Node;
    head->data = 10;

    Node* one = new Node;
    one->data = 20;
    head->next = one;
    one->prev = head;

    Node* two = new Node;
    two->data = 30;
    one->next = two;
    two->prev = one;

    Node* three = new Node;
    three->data = 40;
    two->next = three;
    three->prev = two;

    Node* tail = new Node;
    tail->data = 50;
    three->next = tail;
    tail->prev = three;

    tail->next = head;
    head->prev = tail;


    Node* temp = head;
    int total = 0;
    while(total < 1000)
    {
        cout << temp->data << " -> ";
        if(temp->data == 50)cout << " | ";
        total+=temp->data;
        temp = temp->next;
    }


    cout << "\n\n\n";


    Node* temp2 = tail;
    int motal = 0;
    while(motal < 1000)
    {
        cout << temp2->data << " -> ";
        if(temp2->data == 10)cout << " | ";
        motal+=temp2->data;
        temp2 = temp2->prev;
    }

    cout << "\n\n\n";
    cout << total << endl;
    cout << motal << endl;


    return 0;
}
