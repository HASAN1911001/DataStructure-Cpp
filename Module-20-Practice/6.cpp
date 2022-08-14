/*-----------------------------

Given a sorted integer array A with size N integers and an integer k. Write a program to find out the position of k from array A using binary search. 
Sample input:
7 9
1 2 3 4 9 7 8
Sample output:
5


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

// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int array[], int l, int r, int x)
{
    while (l <= r) {
        int m = l+r / 2;
 
        // Check if x is present at mid
        if (array[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (array[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // if we reach here, then element was
    // not present
    return -1;
}

int main()
{
    int n, k;
    cin>>n>>k;
    int array[n];
    inputArray(array, n);
    cout<<binarySearch(array, 0, n-1, k);

    return 0;
}