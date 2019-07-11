#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    map<string,int> a;
    cin>>n;
    
    while(n--)
    {
        string s;
        cin>>s;
        if(a[s])
        {
            cout<<s<<a[s]<<endl;
            a[s]++;
        }
        else
        {
            cout<<"OK"<<endl;
            a[s]++;
        }
    }
}