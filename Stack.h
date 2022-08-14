#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
    int value;
    Node* next;
    Node* prev;

    Node(int val){
        value = val;
        next = NULL;
        prev = NULL;
    }
};

class Stack{
    Node * head;
    Node * top;
    int count = 0;

public: 
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    //Push:
     void push(int val)
     {
        Node* newNode = new Node(val);
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
        Node * delNode;
        delNode = top;
        int check = -1;

        if(head == NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else if(head == top)
        {
            head = top = NULL;
            count--;
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
    int top()
    {
        if(top == NULL)
        {
            cout<<"Thear is no element in this stack"<<endl;
        }
        else return top->value;
    }
};