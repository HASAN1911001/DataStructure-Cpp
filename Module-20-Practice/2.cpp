/*-----------------------------

Given an integer N. Write a program to print all prime numbers between 1 and N.

Sample input:
5

Sample output:
2 3 5 


--------------------------------*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool flag = true;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        for(int j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<i<<" ";
        }
        else flag = true;
    }
    return 0;
}
