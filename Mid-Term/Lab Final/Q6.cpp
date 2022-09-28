#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    for(int m=0; m<T; m++)
    {
    string colors;
    string mixed;
    int N;
    cin>>N;
    cin>>colors;

    int j = 0;

    while(1)
    {
        if(j >= colors.length()) break;
        else if(j == colors.length()-1)
        {
            mixed.push_back(colors[j]);
            break;
        } 
        else if(colors.substr(j, 2) == "RB" || colors.substr(j, 2) == "BR")
        {
           mixed.push_back('P');
           j += 2;
        }

        else if(colors.substr(j, 2) == "RG" || colors.substr(j, 2) == "GR")
        {
           mixed.push_back('Y');
           j += 2;
        }

        else if(colors.substr(j, 2) == "BG" || colors.substr(j, 2) == "GB")
        {
           mixed.push_back('C');
           j += 2;
        }
        
        else j += 2;

    }
    
    int i = 0;
    while(1)
    {
        if(mixed == "") break;
        if(i == mixed.length()-1) break;
        else if(mixed[i] == mixed[i+1])
        {
            
            if(mixed.length()==2)
            {
                mixed.erase(i, 2);
                break;
            }
            mixed.erase(i, 2);
            i = 0;
        }

        else i++;
    }

    cout<<mixed<<endl;

    
    }

    return 0;
}