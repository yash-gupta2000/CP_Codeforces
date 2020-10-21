/*
author: Yash Gupta
*/
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 75;
const int inf = -1e6;
const int mod = 1e9+7;
int n,m,k;
int dp[N][N][N][N];
int a[N][N];
int cnt;
int go(int r, int c, int rem, int mod) {
    if (r == -1) {
        return !mod ? 0 : inf;
    }
    if (c == -1 or rem == 0) {
        return go(r - 1, m - 1, cnt, mod);
    }
    int &ref = dp[r][c][rem][mod];
    if (ref != -1) {
        return ref;
    }
    int ans = go(r, c - 1, rem, mod);
    int t = go(r, c - 1, rem - 1, (mod + a[r][c]) % k) + a[r][c];
    ans = max(ans, t);
    if (ans < 0) ans = inf;
    return ref = ans;
}
void solve()
{
     cin>>n>>m>>k;
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             cin>>a[i][j];
         }
     }
     mem(dp,-1);
    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<m;j++){
    //          for(int k=0;k<n;k++){
    //              for(int l=0;l<m;l++){
    //                  cout<<dp[i][j][k][l]<<" ";
    //              }
    //              cout<<endl;
    //          }
    //          cout<<endl;
    //      }
    //  }
     if(m==1){
         cout<<"0"<<endl;
         return;
     }
     cnt = m/2;
     int ans = go(n-1,m-1,cnt,0);
     cout<<ans<<endl;
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