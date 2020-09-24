//Currently in Spain, But S is silent :|
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
const int N = 3e5 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;
vector<ll> a;
ll dp[N][2];

ll go(int idx,int state,int n){
    if(idx==n){
        return 0;
    }
    if(dp[idx][state]!=-1){
        return dp[idx][state];
    }
    ll ans;
    if(state == 0){
        //add
        ans = max(a[idx] + go(idx+1,state^1,n),go(idx+1,state,n));
    }
    else{
        ans = max(-1*a[idx]+go(idx+1,state^1,n),go(idx+1,state,n));
    }
    dp[idx][state] = ans;
    return dp[idx][state];
}

void solve()
{
    memset(dp,-1,sizeof dp);
     int n,q;cin>>n>>q;
     a.resize(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     ll ans = go(0,false,n);
     cout<<ans<<endl;
}
 
int main()
{
    IOS;ll t = 1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}