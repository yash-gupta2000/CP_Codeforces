#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,t;
    cin>>n>>t;
    cin>>s;
    
    while(t!=0)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
            
            else
            {
                continue;
            }
        }
        
        t--;
    }
    
    cout<<s;
    return 0;
}
