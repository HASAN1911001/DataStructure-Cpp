#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    int m = n/2;
    int sum = 0;

    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i==0 && j<m || i==n-1 && j>m) || (j==0 && i>m || j==n-1 && i<m) || i==m || j==m)
            {
                sum += a[i][j];
                cout<<"sum: "<<sum<<endl;
            }
        }
    }
    // sum -= a[m][m];

    cout<<sum;

    return 0;
}