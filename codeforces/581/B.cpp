#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n;cin>>n;
    ll a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll ans[n] = {0};
    int mx=a[n];
    for(int i=n-1;i>=1;i--)
    {
        if(a[i]>mx)
        {
            ans[i] = 0;
            mx = a[i];
        }
        else
        {
            ans[i] = mx-a[i]+1;
        }
    }

    for(int i=1;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"0"<<endl;
}