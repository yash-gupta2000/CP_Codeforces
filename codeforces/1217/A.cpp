#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll q;cin>>q;
    while(q--)
    {
        ll x, y,free;
        cin>>x>>y>>free;
        ll dummy  = max((ll)0,(free+y-x+2)/2);
        //cout<<dummy<<endl;
        ll ans = max((ll)0,free-dummy+1);
        cout<<ans<<endl;
    }
	

}

