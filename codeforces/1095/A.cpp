#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0;
    
    for(int i=0;i<n,x<n;i++)
    {
       cout<<s[x];
       x=x+i;
       x++;
    }
    
    
}