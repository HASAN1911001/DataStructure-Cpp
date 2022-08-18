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
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // if we reach here, then element was
    // not present
    return -1;
}