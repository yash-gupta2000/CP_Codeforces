#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    string s;cin>>s;
    ll zero=0,one=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='z')
        {
            zero++;
        }
        else if(s[i]=='n')
        {
            one++;
        }
    }
    for(int i=0;i<one;i++)
    {
        cout<<"1"<<" ";
    }
    for(int i=0;i<zero;i++)
    {
        cout<<"0"<<" ";
    }
    cout<<endl;
    return 0;
}