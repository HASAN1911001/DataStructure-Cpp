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
    int t;
    int n;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        int earnings[n];
        int expences[n];
        inputArray(earnings, n);
        inputArray(expences, n);

        int l;
        cin>>l;
        for(int j=0; j<l; j++)
        {
            int a;
            int sum = 0;
            cin>>a;
            for(int k=0; k<=a; k++)
            {
                sum += earnings[k] - expences[k];
            }
            int b;
            if(sum >= 0) b = 1;
            else b = 0;

            cout<<b<<endl;
        }
        cout<<endl;
    }

    return 0;
}