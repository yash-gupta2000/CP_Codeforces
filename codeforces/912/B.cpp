#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
 
 
int main()
{
    ll n, k;
    cin >> n >> k;
    ll len = 0;
    ll dummy=n;
    while ( n>0 ) {
        n /= 2;
        len ++;
    }
    if(k==1)
    {
        cout<<dummy<<endl;
        return 0;
    }
    ll c = (ll)(pow(2,len)-1);
    cout<<c;
 
 
    return 0;
}