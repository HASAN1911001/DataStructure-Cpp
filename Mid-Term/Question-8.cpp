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

//Display Linked List:
void display(Node *n)
{
    while(n != NULL)
    {
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
//Deletion at a Specific Position: 
void deleteAtSpecific(Node *& head, int position)
{
    Node * temp = head;
    int i = 1;
    while(i<position-1) 
    {
        temp = temp->Next;
        i++;
    }
    Node * delNode = temp->Next;
    temp->Next = delNode->Next;
    delete delNode;
}

int main()
{
    int k, m, n, val;
    Node *head = NULL;

    cin>>k>>m>>n;
    for(int i=0; i<k; i++)
    {
        cin>>val;
        insertAtTail(head, val);
    }

    int pos=1;

    for(int i=0; i<k/(m+n); i++)
    {
        for(int j=0; j<m; j++) pos++;
        for(int j=0; j<n; j++) deleteAtSpecific(head, pos);
    }

    display(head);


    return 0;
}