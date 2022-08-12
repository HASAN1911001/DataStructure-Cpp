/*-----------------------------

Given an integer array A with size N and an integer K,where 0< N, K <10^5 . Write a program for getting Kth minimum and Kth maximum number from the given array.
 
Sample input:
6 3
1 13 20 4 15 17
Sample output:
13 15
Explanation: 1st minimum: 1, 2nd minimum: 4, third minimum: 13
             1st maximum: 20, 2nd maximum: 17, 3rd maximum: 15


--------------------------------*/

#include<bits/stdc++.h>
using namespace std;
//Take Array Input:
void inputArray(int array[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
}

//Give Array Output:
void outputArray(int array[], int n)
{
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n, k;
    cin>>n>>k;

    int array[n];

    inputArray(array, n);
    sort(array, array+n);

    cout<<k<<"'th minimum: "<<array[k-1]<<endl;
    cout<<k<<"'th maximum: "<<array[n-k]<<endl;

    return 0;
}