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
const int N = 1e5 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;
int cost[N];
vector<int> adj[N];
vector<int> radj[N];
vector<int> order;
bool vis[N];
map<int,int> m;

void dfs(int node){
    vis[node] = true;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it);
        }
    }
    order.pb(node);
}
void dfs2(int node){
    vis[node] = true;
    m[cost[node]] += 1;
	for (auto i : radj[node]) {
		if (!vis[i]) {
			dfs2(i);
		}
	}
}

void solve()
{
    ll ans=0;
    ll ways=1;
     int n;cin>>n;
     for(int i=1;i<=n;i++){
         cin>>cost[i];
     }
     int edges;cin>>edges;
     for(int i=0;i<edges;i++){
         int x,y;cin>>x>>y;
         adj[x].pb(y);
         radj[y].pb(x);
     }
     for(int i=1;i<=n;i++){
         if(!vis[i]){
             dfs(i);
         }
     }
     vector<int> v;
     reverse(all(order));
     mem(vis,false);
     for(auto it:order){
        if(!vis[it]){
            dfs2(it);
            ans += (*m.begin()).first;
            v.pb((*m.begin()).second);
            m.clear();
        } 
     }
     for(auto i:v){
         ways = (ways*i)%mod;   
     }
     cout<<ans<<" "<<ways<<endl;
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