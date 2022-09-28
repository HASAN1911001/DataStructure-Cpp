#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int Y;
    cin>>Y;

    if(Y == 1) cout<<Y;
    else {
        long long int result = pow(2, Y-2) * pow(2, Y-1);
        cout<<result;
    }

    return 0;
}