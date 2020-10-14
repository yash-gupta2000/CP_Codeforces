/*
author: Yash Gupta
*/
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
const int N = 205;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;
int r,g,b;
int dp[205][205][205];
vector<int> red(N);
vector<int> green(N);
vector<int> blue(N);
ll go(int i,int j,int k){
    if(dp[i][j][k]!=-1){
        return dp[i][j][k];
    }
    ll ans=0;
    if(i<r && j<g){
        ans = max(ans,red[i]*green[j] + go(i+1,j+1,k));
    }
    if(j<g && k<b){
        ans = max(ans,green[j]*blue[k] + go(i,j+1,k+1));
    }
    if(i<r && k<b){
        ans = max(ans,red[i]*blue[k] + go(i+1,j,k+1));
    }
    return dp[i][j][k] = ans;
}
void solve()
{
     cin>>r>>g>>b;
     mem(dp,-1);
     for(int i=0;i<r;i++){
         cin>>red[i];
     }
     for(int i=0;i<g;i++){
         cin>>green[i];
     }
     for(int i=0;i<b;i++){
         cin>>blue[i];
     }
     sort(red.begin(),red.begin()+r,greater<int>());
     sort(green.begin(),green.begin()+g,greater<int>());
     sort(blue.begin(),blue.begin()+b,greater<int>());
     ll ans = go(0,0,0);
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