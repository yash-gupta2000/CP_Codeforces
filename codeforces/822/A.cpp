#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fact(ll n)
{
    ll f=1;
    for(int i=1;i<=n;i++)
    {
        f = f*i;
    }
    return f;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<fact(b);
    }
    else
    {
        cout<<fact(a);
    }
    

}