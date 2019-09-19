#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;cin>>n;
    ll x=0,energy=0,res=0,y;

    for(int i=0;i<=n;i++)
    {
        cin>>y;
        energy += x-y;
        if(energy<0)
        {
            res += -(energy);
            energy=0;
        }

        x=y;
    }

    cout<<res<<endl;
    
}