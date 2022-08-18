#include<bits/stdc++.h>
using namespace std;

void inputArray(int array[], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int a1[n]={0};
    inputArray(a1, n);

    int m;
    cin>>m;
    int a2[m]={0};
    inputArray(a2, m);

    int a3[n]={0};
    int k=0;
    
    bool flag = true;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a1[i] == a2[j]) 
            {
                flag = false;
                break;
            }
        }
        if(flag)
            {
                a3[k] = a1[i];
                k++;
            }
            else flag = true;
    }

    for(int i=0; i<k; i++)
    {
        cout<<a3[i]<<" ";
    }

    return 0;
}