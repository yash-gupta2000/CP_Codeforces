/*
author: Yash Gupta
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 1005;
const int inf = 9e9 + 9;
const int mod = 1e9+7;
int n,m;
char a[N][N];
bool vis[N][N][4];
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
char b[4] = {'D','I','M','A'};
int dp[N][N][4];

int go(int i,int j,int prev){
    if(i < 0 || i>n || j < 0 || j > m){
        return 0;
    }
    if(vis[i][j][prev]){
        return inf;//infinite dima words
    }   
    char curr = b[(prev+1)%4];
    //cout<<curr<<i<<" "<<j<<endl;
    if(a[i][j]!=curr){
        return 0;
    }
    //cout<<"ran"<<endl;
    if(dp[i][j][prev]!=-1){
        return dp[i][j][prev];
    }
    vis[i][j][prev] = true;
    int increment  = 0;
    if(prev==2){
        increment = 1;
    }
    int ans=0;
    for(int move=0;move<4;move++){
        ans = max(ans,increment + go(i+dx[move],j+dy[move],(prev+1)%4));
    }
    vis[i][j][prev] = false;
    return dp[i][j][prev] = ans;
}
void solve()
{
     cin>>n>>m;
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             cin>>a[i][j];
         }
     }
     mem(dp,-1);
     mem(vis,false);
     int ans = 0;
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             ans = max(ans,go(i,j,3));//3 means character 'D' of DIMA.
         }
     }
    //  for(int i=0;i<n;i++){
    //      for(int j=0;j<m;j++){
    //          cout<<dp[i][j][0]<<" "<<dp[i][j][1]<<" "<<dp[i][j][2]<<" "<<dp[i][j][3]<<" ";
    //      }
    //      cout<<endl;
    //  }
    //  cout<<ans<<endl;
     if(!ans){
         cout<<"Poor Dima!"<<endl;
     }
     else if(ans > n*m){
         cout<<"Poor Inna!"<<endl;
     }
     else{
         cout<<ans<<endl;
     }
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