#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int a[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int k=0; k<n; k++)
            {
                for(int l=0; l<m; l++)
                {
                    if(i == k && l == j) continue;

                    if(a[i][j] == a[k][l]) a[k][l] = -1;
                }
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }


    return 0;
}