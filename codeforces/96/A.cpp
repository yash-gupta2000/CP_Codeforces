#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int counter=1;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
        {
            counter++;
        
            if(counter>=7)
            {
                break;
            }
        }
        else
        {
            counter=1;
        }
        
    }
   
    if(counter>=7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
    
}