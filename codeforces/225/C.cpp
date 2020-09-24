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
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;
const int N=1e3+5;

int n, m, x, y;
int cnt[2][N];
char a[N][N];
int cache[N][N][2];
void precompute()
{
	for(int j=1;j<=m;j++)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i][j]=='.')
				cnt[0][j]++;
			else
				cnt[1][j]++;
		}
	}
}

int dp(int j, int taken, int col)
{
	if(j==m+1)
	{
		if(taken==1 || (taken-1>=x && taken-1<=y))
			return 0;
		return 1e9;
	}
	int &ans=cache[j][taken][col];
	if(ans!=-1)
		return ans;
	if(taken<x)
	{
		ans=cnt[col^1][j]+dp(j+1, taken+1, col);
	}
	else if(taken<y)
	{
		ans=min(cnt[col^1][j] + dp(j+1, taken+1, col), cnt[col^1][j] + dp(j+1, 1, col^1));
	}
	else
	{
		ans=cnt[col^1][j] + dp(j+1, 1, col^1);
	}
	return ans;
}
void solve()
{
     memset(cache, -1, sizeof(cache));
    cin>>n>>m>>x>>y;
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=m;j++)
    	{
    		cin>>a[i][j];
    	}
    }
    precompute();
    //cnt[0][n] is number of white
    //cnt[1][n] is number of black
    // for(int i=0;i<2;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<cnt[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int ans=min(dp(1, 1, 0), dp(1, 1, 1));
    cout<<ans;
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


