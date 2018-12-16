#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    string s;
    cin>>s;
    int counter;
    int l;
    l=s.length()-1;
    if(s.length()>10)
    {
        counter=s.length()-2;
        cout<<s[0];
        cout<<counter;
        cout<<s[l]<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
    }
    
    
    
    return 0;
    
}