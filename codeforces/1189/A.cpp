#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;string s;
    cin>>s;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            flag += 1;    
        }
        else
        {
            flag -= 1;
        }
    }
    if(flag!=0)
    {
        cout<<"1"<<endl<<s;
    }
    else
    {
        cout<<"2"<<endl;
        cout<<s.substr(0,n-1)<<" "<<s[n-1]<<endl;
        
    }
    return 0;
}
