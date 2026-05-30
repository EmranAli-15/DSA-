#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next = NULL;
};

int main()
{
    // using malloc function;
    /*
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = 10;

    Node* one = (Node*)malloc(sizeof(Node));
    one->data = 11;
    head->next = one;

    Node* two = (Node*)malloc(sizeof(Node));
    two->data = 12;
    one->next = two;

    Node* three = (Node*)malloc(sizeof(Node));
    three->data = 13;
    two->next = three;
    //three->next = NULL;

    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    Node* delTemp = head;
    while(delTemp != NULL)
    {
        Node* nextNode = delTemp->next;
        free(delTemp);
        delTemp = nextNode;
    }
    */




    // using new key-word

    Node* head = new Node;
    head->data = 10;

    Node* one = new Node;
    one->data = 11;
    head->next = one;

    Node* two = new Node;
    two->data = 12;
    one->next = two;

    Node* three = new Node;
    three->data = 13;
    two->next = three;


    // Add node at the front
    Node* newFrontNode = new Node;
    newFrontNode->data = 3;

    newFrontNode->next = head;
    head = newFrontNode;
    // ======================



    // Add node at the end
    Node* tempEnd = head;
    while(tempEnd->next)
    {
        tempEnd = tempEnd->next;
    }
    Node* tail = new Node;
    tail->data = 14;
    tempEnd->next = tail;
    // ======================




    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    // Free memory
    Node* delTemp = head;
    while(delTemp != NULL)
    {
        Node* nextNode = delTemp->next;
        delete delTemp;
        delTemp = nextNode;
    }


    return 0;
}
