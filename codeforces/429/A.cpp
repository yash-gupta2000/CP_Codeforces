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
vector<int> res;
vector<int> adj[N];
vector<int> a(N);
vector<int> b(N);
vector<bool> vis(N);
struct Node{
    int source;
    int level;
    int odd;
    int even;
};
void bfs(int source){
    queue<Node> q;
    q.push({source,0,0,0});
    vis[source] = true;
    while(!q.empty()){
        Node curr = q.front();
        q.pop();
        int curr_node = curr.source;
        int lvl = curr.level;
        int odd = curr.odd;
        int even = curr.even;
        int val = a[curr_node];
        if(lvl%2){
            val += odd;            
        }
        else{
            val += even;
        }
        val %= 2;
        if(val != b[curr_node]){
            res.pb(curr_node);
            if(lvl%2){
                odd++;
            }
            else{
                even++;
            }
        }
        for(auto it:adj[curr_node]){
            if(!vis[it]){
                q.push({it,lvl+1,odd,even});
                vis[it] = true;
            }
        }
    }

}
void solve()
{
     int n;cin>>n;
     for(int i=0;i<n-1;i++){
         int x,y;cin>>x>>y;
         adj[x].pb(y);
         adj[y].pb(x);
     }
     for(int i=1;i<=n;i++){
         cin>>a[i];
     }
     for(int i=1;i<=n;i++){
         cin>>b[i];
     }
     bfs(1);
     cout<<res.size()<<endl;
     sort(all(res));
     for(auto it:res){
         cout<<it<<endl;
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