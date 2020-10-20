/*
author: Yash Gupta
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll unsigned long long
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 21;
const int inf = 9e18 + 9;
const int mod = 1e9+7;
vector<int> a;
ll fact[N];
void solve()
{
     ll n;cin>>n;
     fact[0] = 1;fact[1] = 1;
     for(int i=2;i<=n;i++){
         fact[i] = (i*fact[i-1]);
     }
     ll numerator = fact[n];
     //cout<<numerator<<endl;
     ll den = 2 * pow(n/2,2);
     ll res = numerator/den;
     cout<<res<<endl;
}
 
int32_t main()
{
    IOS;int t = 1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}