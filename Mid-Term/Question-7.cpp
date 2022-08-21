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
//Reverse nonRecersive: 
Node *reverseNonRecersive(Node *& head, int k)
{
    int i=0;
    Node *prev = NULL;
    Node * current = head;
    if(head == NULL){
        return head;
    }

    Node *next = head->Next;

    while(true)
    {
        current->Next = prev;
        prev = current;
        current = next;
        if(i%k == 0) reverseNonRecersive(current, k);
        if(current == NULL) break;
        next = next->Next;
        i++;
    }
    return prev;
}

Node* reverse(Node* head, int k)
{
    // base case
    if (!head)
        return NULL;
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;
  
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k) {
        next = current->Next;
        current->Next = prev;
        prev = current;
        current = next;
        count++;
    }
  
    if (next != NULL) head->Next = reverse(next, k);
  
    return prev;
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
    int k;
    cin>>k;

    head= reverse(head, k);

    display(head);


    return 0;
}