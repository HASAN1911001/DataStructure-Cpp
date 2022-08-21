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
//Insertion at Head:
void insertAtHead(Node *&head, int val)
{
    Node * newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
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
//Insertion at Specific Position: 

//Insertion after Specific Value: 

//Length of a Linear Linked List:
int countLength(Node *& head)
{
    int count = 0;
    Node *temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

//Search a Specific Value in Unique Valued Linked List:

//Search a Specific Value in Duplicate Enabled Linked List:

//Delation at Head:

//Delation at Tail: 

//Deletion at a Specific Position: 

void delateAtSpecific(Node *& head, int position)
{
    Node * temp = head;
    int i = 1;
    while(i<position-1) temp = temp->Next;
    Node * delNode = temp->Next;
    temp->Next = delNode->Next;
    delete delNode;
}
//Delate by Value in Uniqued Valued Linked List: 

//Reverse nonRecersive: 
Node *reverseNonRecersice(Node *& head)
{
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
        if(current == NULL) break;
        next = next->Next;
    }
}
//Doubly Linked List: 


int main()
{
    Node *head = NULL;


    int n;
    //Choice 1: Insert at Head
    //Choice 2: Insert at Tail

    cout<<"Choice 1: Insert at Head: "<<endl
    <<"Choice 2: Insert at Tail" << endl <<"Choice 3: Exit"<<endl<<endl;
    int choice = 2;
    while(choice != 3)
    {
        cout<<"Enter the Value:";
        cin>>n;
        if(choice == 1) insertAtHead(head, n);
        else if(choice == 2) insertAtTail(head, n);
        cout<<"Next Choice:";
        cin>>choice;
    }

    display(head);

    return 0;
}