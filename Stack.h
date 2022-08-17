#include<bits/stdc++.h>
using namespace std;

template<typename N>
class Node{
public: 
    N value;
    Node* next;
    Node* prev;

    Node(N val){
        value = val;
        next = NULL;
        prev = NULL;
    }
};

template <typename S>
class Stack{
    Node <S> * head;
    Node <S> * top;
    int count = 0;

public: 
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    //Push:
     void push(S val)
     {
        Node <S>* newNode = new Node<S>(val);
        if(head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        else
        {
            top->next = newNode;
            newNode->prev = top; 
            top = newNode;
            count++;
            return;
        }

     }
    //Pop:
    int pop(void)
    {
        Node <S> * delNode;
        delNode = top;
        int check = -1;

        if(head == NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return check;
        }
        else if(head == top)
        {
            head = top = NULL;
            count--;
            cout<<count<<endl;
        }
        else 
        {
            top = delNode->prev;
            top->next = NULL;
            count--;
        }

        check = delNode->value;
        delete delNode;

        return check;
    }

    //Empty:
    bool empty()
    {
        if(head == NULL) return true;
        else return false;
    }
    //Size:
    int size()
    {
        return count;
    }
    //Top: 
    S Top()
    {
        S chk;
        if(top == NULL)
        {
            int chk;
            cout<<"Thear is no element in this stack"<<endl;
        }
        else chk = top->value;

        return chk;
    }
};