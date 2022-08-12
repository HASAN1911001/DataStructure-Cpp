/*-----------------------------

Given an integer array A with size N and an integer Q for queries, where 0< N,Q < 10^6.
Write a program using prefix sum concept to find the sum of a given range L to R for each query. (1 <= L,R <= N and L <= R)
N
A1 A2 A3…….AN
Q
L1  R1
L2  R2
.    .
.     .
LQ  RQ
Sample input:
6
1 2 3 4 5 6
3
1 3
4 6
2 4

Sample output:
6
15
9


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

//Calculating Cumulative sum. 
void prefix_sum(int array[], int n)
{
    for(int i=1; i<n; i++)
    {
        array[i] += array[i-1];
    }
}

int main()
{
    int n;
    cin>>n;
    int array[n];
    inputArray(array, n);
    outputArray(array, n);
    prefix_sum(array, n);
    outputArray(array, n);

    int Q, L, R;
    cin>>Q;

    for(int i=0; i<Q; i++)
    {
        cin>>L>>R;
        if(L==1) cout<<array[R-1];
        else cout<<array[R-1] - array[L-2];
        cout<<endl;
    }

    return 0;
}