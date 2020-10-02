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
const int N = 1e3 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;
int indeg[N],outdeg[N],diam[N],adj[N];
void solve()
{
     int n,m;
     cin>>n>>m;
     for(int i=0;i<m;i++){
         int u,v,val;cin>>u>>v>>val;
         outdeg[u]++;
         indeg[v]++;
         diam[u] = val;
         adj[u] = v;
     }
     for(int i=1;i<=n;i++){
         if(outdeg[i]>0 && indeg[i]==0){
             res++;
         }
     }
     cout<<res<<endl;
     for(int i=1;i<=n;i++){
         if(outdeg[i]>0 && indeg[i]==0){
             int ans = INT_MAX;
             int curr = i;
             while(outdeg[curr]){
                 ans = min(ans,diam[curr]);
                 curr = adj[curr];
             }
             cout<<i<<" "<<curr<<" "<<ans<<endl;
         }
     }
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