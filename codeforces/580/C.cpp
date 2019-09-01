#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cats,ans;
 vector<int> v;
vector<ll> vv[300000+11];
vector<int> visit(2 * 1e5+ 50, 0);

void dfs(ll node,ll cnt)
{
    if(v[node])
    {
        cnt++;
        if(cnt>cats)
        {
            return;
        }
    }
    else
    {
        cnt=0;
    }
    visit[node] = 1;
    for(auto i:vv[node])
    {
        if(!visit[i])
        {
            dfs(i,cnt);
        }
    }
    if(vv[node].size()==1 && node !=1 )
    {
        ans++;
        return;
    }
    
}

int main()
{
    ll n;
    cin>>n>>cats;
    v.push_back(-1);
    for(int i=1;i<=n;i++)
    {
        int inp;cin>>inp;
        v.push_back(inp);
    }

    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        vv[x].push_back(y);
        vv[y].push_back(x);
    }
    dfs(1,0);
    cout<<ans<<endl;

}