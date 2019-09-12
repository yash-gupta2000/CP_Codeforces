#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    
    ll n;cin>>n;
    ll v[n];
    for(int i=0;i<n;i++)
    {
        v[i] = 0;
    }
    ll q;cin>>q;
    while(q--)
    {
        ll a,b,debt;
        cin>>a>>b>>debt;
        v[a-1] -= debt;
        v[b-1] += debt;  
              
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i]<<endl;
    // }
    ll ngve=0,psve=0;
    for(int i=0;i<n;i++)
    {
        if(v[i] >0 )
        {
            psve += v[i];
        }
        else
        {
            ngve += abs(v[i]);
        }  
    }
    //cout<<psve<<" "<<ngve<<endl;
    cout<<max(psve,ngve);
	

}

