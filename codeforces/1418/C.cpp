//It's a long way ahead.
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
int a[N];
int dp[200005][4];
int n;
int go(int idx,int frd){
    if(idx > n){
        return 0;
    }
    if(dp[idx][frd]!=-1){
        return dp[idx][frd];
    }
    int ans = 1e9;
    if(frd == 0){
        ans = min(go(idx+1,1),go(idx+2,1));
    }
    else{
        ans = min(a[idx]+go(idx+1,0),a[idx]+a[idx+1]+go(idx+2,0));
    }
    dp[idx][frd] = ans;
    return dp[idx][frd];
}
void solve()
{
     cin>>n;
     for(int i=1;i<=n;i++){
         cin>>a[i];
         dp[i][0] = dp[i][1] = -1;
     }
     int ans = go(1,1);
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