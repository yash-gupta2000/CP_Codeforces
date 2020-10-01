//What comes fast doesn't last and What comes last will never be your past :)
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
const int N = 1e5 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;
string s;
bool vis[N][27];
int dp[N][27];
int pairs[27][27];
int go(int idx,int last){
    if(idx == s.size()){
        return 0;
    }
    if(dp[idx][last]!=-1){
        return dp[idx][last];
    }
        dp[idx][last] = go(idx+1,last)+1;
        if(pairs[s[idx]-'a'][last] == false){
            dp[idx][last] = min(dp[idx][last], go(idx + 1, s[idx] - 'a'));
        }
    return dp[idx][last];
}
void solve()
{
    cin>>s;
    int n;cin>>n;
    mem(dp,-1);
    for(int i=0;i<n;i++){
        string x;cin>>x;
        pairs[x[0]-'a'][x[1]-'a'] = pairs[x[1]-'a'][x[0]-'a'] = true;
    }
    int ans = go(0,26);
    cout<<ans<<endl;
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