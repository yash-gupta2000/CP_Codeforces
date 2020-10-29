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
const int N = 1e5;
const int inf = 9e18 + 9;
const int mod = 1e9+7;
vector<int> a;
inline int add(int a, int b)
{
    return a + b >= mod ? a + b - mod : a + b;
}
inline int sub(int a, int b)
{
    return a - b < 0 ? a - b + mod : a - b;
}
int dp[100500];
void solve()
{
	 int t,k;
    cin >> t >> k;
    for (int i=0;i<k;i++)
    {
        dp[i]=1;
    }
    for (int i=k;i<=N;i++)
    {
        dp[i]=add(dp[i-1],dp[i-k]);
    }
    for (int i=1;i<=N;i++)
    {
        dp[i]=add(dp[i-1],dp[i]);
    }
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        cout << sub(dp[b],dp[a-1]) << endl;;
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