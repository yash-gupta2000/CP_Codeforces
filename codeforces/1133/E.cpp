 
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
int a[5005];
int dp[5005][5005]; 
int cnt[5005];
int dpgo(int idx,int k){
	if(k<0){
		return -1e9;
	}
	if(idx==0){
		return 0;
	}
	if(dp[idx][k]!=-1){
		return dp[idx][k];
	}
	else{
		int ans = dpgo(idx-1,k);
		ans = max(ans,dpgo(cnt[idx],k-1) +idx-cnt[idx] );
		dp[idx][k] = ans;
	}
	
	return dp[idx][k];
}
void solve()
{
	memset(dp,-1,sizeof dp);
	 int n,k;cin>>n>>k;
	 for(int i=1;i<=n;i++){
		 cin>>a[i];
	 }
	 sort(a+1,a+n+1);
	 int j=1;
	 for(int i=1;i<=n;i++){
		 while(a[i]-a[j] > 5){
			 j++;
		 }
		 cnt[i] = j-1;
	 }
	 int ans = dpgo(n,k);
	 cout<<ans<<endl;
}
 
int main()
{
	DANGER;
	ofstream out("output.txt");
 
	auto start = chrono::high_resolution_clock::now();
	
	LL t = 1;
	// cin>>t;
	rep(test,1,t)
	{
		solve();
	}
	
	auto stop = chrono::high_resolution_clock::now();
	// auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start); 
	// cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}