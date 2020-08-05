 
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
 
void solve()
{
	 LL n;cin>>n;
	 vector<pair<int,int>> v(n);
	 LL res=0;
	 LL a[n],b[n];
	 LL candy_tgt = INT_MAX;
	 LL org_tgt = INT_MAX;
	 for(int i=0;i<n;i++){
		 cin>>a[i];
		 candy_tgt = min(a[i],candy_tgt);
	 }
	 for(int i=0;i<n;i++){
		 cin>>b[i];
		 org_tgt = min(org_tgt,b[i]);
	 }
	 for(int i=0;i<n;i++){
		 v[i] = {a[i],b[i]};
	 }
	 for(int i=0;i<n;i++){
		 int candy = v[i].first;
		 int org = v[i].second;
		 if(candy > candy_tgt && org > org_tgt){
			 int moves = min(candy-candy_tgt,org-org_tgt);
			 res += moves;
			 candy -= moves;org -= moves;
			 if(candy > candy_tgt){
				 res += (candy - candy_tgt);
			 }
			 if(org > org_tgt){
				 res += (org - org_tgt);
			 }
		 }
		 else if(candy == candy_tgt && org > org_tgt){
			 res += (org - org_tgt);
		 }
		 else if(candy > candy_tgt && org == org_tgt){
			 res += (candy - candy_tgt);
		 }
		 else{
			 continue;
		 }
	 }
	 cout<<res<<endl;
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