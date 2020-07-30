 
//It doesn't matter how slow you go, Unless you don't stop.
#include<iostream>
#include<algorithm>
#include<bitset>
 
#include<cmath>
#include<cstring>
#include<climits>
 
#include<deque>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
 
#include<fstream>
#include<chrono>
using namespace std;
 
typedef long long LL;
typedef pair<LL,LL> p64;
typedef vector<LL> v64;
typedef map<LL,LL> mp64;
 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,s,e) for(long long i=s;i<=e;i++)
#define brep(i,s,e) for(long long i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
const int N = 1e5 + 5;
 
int n, k, z;
int a[N];
int cache[N][6][2];
 
int dp(int idx, int left, int prev, int moves)
{
	if(moves == k)
		return a[idx];
	int &ans = cache[idx][left][prev];
	if(ans != -1)
		return ans;
	ans = a[idx] + dp(idx + 1, left, 0, moves + 1);
	if(prev == 0 && left + 1 <= z)
		ans = max(ans, a[idx] + dp(idx - 1, left + 1, 1, moves + 1));
	return ans;
}
 
void solve()
{
		cin >> n >> k >> z;
		for(int i = 0; i <= n; i++)
			for(int j = 0; j <= 5; j++)
				for(int k = 0; k <= 1; k++)
					cache[i][j][k] = -1;
		for(int i = 1; i <= n; i++)
			cin >> a[i];
		int ans = dp(1, 0, 1, 0);
		cout << ans << endl;
}

 
int main()
{
	DANGER;
	ofstream out("output.txt");
 
	auto start = chrono::high_resolution_clock::now();
	
	LL t = 1;
	cin>>t;
	rep(test,1,t)
	{
		solve();
	}
	
	auto stop = chrono::high_resolution_clock::now();
	// auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start); 
	// cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}