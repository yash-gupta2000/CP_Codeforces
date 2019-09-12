#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    
    ll n;cin>>n;
    ll v[n];
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[v[v[i]-1]-1]-1 == i)
        {
            flag = true;
        }
    }
    if(!flag)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
	

}

