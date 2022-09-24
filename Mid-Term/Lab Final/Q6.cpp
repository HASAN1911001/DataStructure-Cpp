#include<bits/stdc++.h>
using namespace std;

int main()
{
    string colors;
    string mixed;

    cin>>colors;

    for(int i=0; i<colors.length()-1; i++)
    {
        if(colors[i] == colors[i+1])
        {
            colors.erase(i, 2);
            i = 0;
        }
    }

    int j = 0;
    for(int i=0; i<colors.length(); i++)
    {
        
        if(i+1 == colors.length()) mixed[j] = colors[i];

        else if(colors[i]=='R' && colors[i+1]=='B')
        {
            mixed[j] = 'P';
            j++;
            cout<<mixed;
        }

        else if(colors[i]=='R' && colors[i+1]=='G')
        {
            mixed[j] = 'Y';
            j++;
            cout<<mixed[j];
            cout<<colors[i];
        }

        else if(colors[i]=='B' && colors[i+1]=='G')
        {
            mixed[j] = 'C';
            j++;
            cout<<mixed;
        }
    }

    cout<<mixed;

    // for(int i=0; i<mixed.length()-1; i++)
    // {
    //     if(mixed[i] == mixed[i+1])
    //     {
    //         mixed.erase(i, 2);
    //         i = 0;
    //     }
    // }

    return 0;
}