#include<bits/stdc++.h>
using namespace std;
//Linked List Creator Class:
class dublyNode
{
public:
    int value;
    Node *Next;
    Node *Prev;

    //Constractor Creation;
    doublyNode(int val)
    {
        value = val;
        Next = NULL;
        Prev = NULL;
    }

};

//Display Linked List:
void display(doublyNode *n)
{
    while(n != NULL)
    {
        cout<< n->value;
        if (n->Next != NULL) cout<<" -> ";
        n = n->Next;
    }
}
//Insertion at Head:
void insertAtHead(doublyNode *&head, int val)
{
    doublyNode * newNode = new Node(val);
    newNode->Next = head;
    head->prev = newNode;
    head = newNode;
}
//Insertion at Tail:
void insertAtTail(doublyNode *&head, int val){
    doublyNode *newNode = new Node(val);

    if(head == NULL)
    {
        head = newNode;
        return;
    }
    doublyNode *temp = head;
    while(temp->Next != NULL) temp = temp->Next;
    temp->Next = newNode;
    newNode->Prev = temp;
}




int main()
{
    int n;
    cin>>n;
    int a[n][3];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(j==1) a[i][j]=i+1;
            else cin>>a[i][j];
        }
    }

    // int first = 1;
    // int last = 1;
    // cout<<endl;

    // for(int i=0; i<n; i++)
    // {
    //     if(a[i][0]==0)
    //     {
    //         if(first == 1) first =0;
    //         else
    //         {for(int j=i+1; j<n; j++)
    //         {
    //             //if(a[i][2]==a[j][1] || a[i][2]==a[j][0]) continue;
    //             // if(j==i) continue;
    //             if(a[j][2] == 0)
    //             {
    //                 a[i][0] = a[j][1];
    //                 a[j][2] = a[i][1];
    //                 break;
    //             }
    //         }
    //         }
            
    //     }
    //     if(a[i][2]==0)
    //     {
    //         if(last == 1) last = 0;
    //         else
    //         {for(int j=i+1; j<n; j++)
    //         {
    //         if(a[i][0]==a[j][1] || a[i][0]==a[j][2]) continue;
    //         // if(i==j) continue;
    //         if(a[j][0] == 0)
    //         {
    //             a[i][2] = a[j][1];
    //             a[j][0] = a[i][1];
    //             break;
    //         }
    //         }
    //         }

    //     }
    //     cout<<a[i][0]<<" "<<a[i][2]<<endl;
    // }


    Node *head = NULL;
    for(int i=0; i<n; i++)
    {
        if(a[i][0]==0)
        {
            for(int j=0; j<3; j++)
            {
                insertAtTail(head, a[i][j]);
                a[i][j] = -1;
            }
        }
    }
    
    while(1)
    {
        if(head->Next == NULL)
        {
            if(head->value == 0)
            {
                for(int i=0; i<n; i++)
                {
                    if(a[i][0] == 0){
                        head->value = a[i][1];
                        head->
                    }
                }
            }
        }

    }
    return 0;
}