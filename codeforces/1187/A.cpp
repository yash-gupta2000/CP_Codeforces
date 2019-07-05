#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll egg,stic,toy,ans;
        cin>>egg>>stic>>toy;
    
        if(egg==stic && stic == toy)
            {
                ans=1;
            }
        else
            {
                ans = max(egg-stic,egg-toy)+1;
            }
    
    cout<<ans<<endl;
    ans=0;
    
    }
}