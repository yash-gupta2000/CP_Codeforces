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
int n;
int x[101],y[101];
bool vis[101];
void dfs(int node){
    vis[node] = true;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(x[i]==x[node] || y[i] == y[node]){
                dfs(i); 
            }
        }
    }
}
void solve()
{
    cin>>n;
     for(int i=0;i<n;i++){
         cin>>x[i]>>y[i];
     }
     int connected=0;
     for(int i=0;i<n;i++){
         if(!vis[i]){
             dfs(i);
             connected++;
         }
     }
     cout<<max(0,connected-1)<<endl;   
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