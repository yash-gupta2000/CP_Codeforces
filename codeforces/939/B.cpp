#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    
    ll n;cin>>n;
    ll k;cin>>k;
    ll a[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }
    ll ans,minx;
    ll boxes=0;
    minx = n%a[0];
    boxes = n/a[0];
    ans = 0;
    //cout<<minx<<" "<<boxes<<" "<<ans<<endl;
    for(int i=1;i<k;i++)
    {
        if(minx>(n%a[i]))
        {
            minx= n%a[i];
            boxes = n/a[i];
            ans = i;
        }
    }
    
    cout<<ans+1<<" "<<boxes<<endl;
    
	

}

