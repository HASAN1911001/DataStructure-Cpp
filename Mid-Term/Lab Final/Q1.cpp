#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n, c, x;
        int sum = 0;
        
        cin>>n>>c;
        for(int j=0; j<n; j++)
        {
            cin>>x;
            sum += x;
        }

        if(sum*2<=c) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}