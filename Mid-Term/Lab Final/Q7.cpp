#include<bits/stdc++.h>
using namespace std;

int neighbour(int arr1[],int arr2[], int n, int k)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr1[i] == k) count++;
    }

    return count;
}
int main()
{
    int N, E;
    int a, b;
    int k;
    cin>>N>>E;
    int arr1[E]={0};
    int arr2[E]={0};
    int j = 0;
    for(int i=0; i<E; i++)
    {
        cin>>a>>b;
        arr1[j] = a;
        arr2[j] = b;
        j++;
    }
    cin>>k;

    int count = neighbour(arr1, arr2, E,  k);

    cout<<count;
    return 0;
}