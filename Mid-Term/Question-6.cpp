#include<bits/stdc++.h>
using namespace std;

//Linked List Creator Class:
class Node
{
public:
    int value;
    Node *Next;

    //Constractor Creation;
    Node(int val)
    {
        value = val;
        Next = NULL;
    }

};

//Display Linked List with odd numbers:
void displayOdd(Node *n)
{
    while(n != NULL)
    {
        if(n->value%2 == 0) n->value = -1;
        cout<< n->value;
        if (n->Next != NULL) cout<<" -> ";
        n = n->Next;
    }
}
//Insertion at Tail:
void insertAtTail(Node *&head, int val){
    Node *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->Next != NULL) temp = temp->Next;
    temp->Next = newNode;
}

int main()
{
    int n, val;
    Node *head = NULL;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>val;
        insertAtTail(head, val);
    }

    displayOdd(head);


    return 0;
}