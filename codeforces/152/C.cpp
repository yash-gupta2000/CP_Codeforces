//It's really tough
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 2e5 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;

void solve()
{
     int n,m;cin>>n>>m;
     vector<string> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     set<ll> cnt[m];
     for(int j=0;j<m;j++){
     for(int i=0;i<n;i++){
         cnt[j].insert(a[i][j]);
     }
     }
     ll res = 1;
     for(int i=0;i<m;i++){
         res = res * cnt[i].size();
         res %= mod;
     }
     cout<<res<<endl;
}
 
int main()
{
    IOS;ll t = 1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}