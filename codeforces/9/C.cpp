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
vector<int> v;
void dfs(int node,int limit){
    if(node > limit){
        return;
    }
    v.pb(node);
    dfs(node*10,limit);
    dfs(node*10 + 1,limit);
}
void solve()
{
     int n;cin>>n;
     dfs(1,n);
     cout<<v.size()<<endl;
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