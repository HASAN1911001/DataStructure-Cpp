#include<bits/stdc++.h>
#include"Stack.h"

using namespace std;

int globalID = 100;
class person{
    string name;
    int id;
    float salary;

public:
    person(){
        name = "";
        id = -1;
        salary = 1.0;
    }

    void setName(string name){
        this->name = name;
    }
    void setSalary(float salary){
        this->salary = salary;
    }
    person(string name, float salary)
    {
        setName(name);
        setSalary(salary);
        id = globalID;
        globalID++;
    }
    void print()
    {
        cout << name <<" | "<<id<<" | "<<salary<<endl;
    }
};
int main()
{
    // Stack <pair<int, char>>st;

    // st.push(make_pair(1, 'a'));
    // st.push(make_pair(2, 'b'));
    // st.push(make_pair(3, 'c'));
    // cout<<st.size()<<endl;
    // pair <int, char> chk ;
    // chk = st.Top();
    // cout<<chk.first<<" "<<chk.second<<endl;
    // cout<<st.empty()<<endl;

    Stack <int> st;
   
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.pop();


    // while(!st.empty()){
    //     person printObj;
    //     printObj = st.pop();
    //     printObj.print();
    // }
    
    int val = st.Mid();
    cout<<val;

    return 0;
}