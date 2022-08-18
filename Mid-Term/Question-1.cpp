#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    
    //Taking n number as input.
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    //Finding Maximum number in the array.
    int m;
    m = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i]>m) m = arr[i];
    }
    
    //Calculating Frequency of the numbers.
    int freq[m+1] = {0};
    
    for(int i=0; i<n; i++)
    {
        freq[arr[i]]++;
    }
    
    //printing frequency of the numbers.
    for(int i=0; i<=m; i++)
    {
        if(freq[i]) cout<<i<<"=>"<<freq[i]<<endl;
    }

    return 0;
}