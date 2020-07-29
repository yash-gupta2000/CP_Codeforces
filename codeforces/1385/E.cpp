 
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
#define aLL(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
vector<vector<LL>> grp;
vector<LL> order;
vector<LL> vis;
 
void dfs(int node) {
	if(vis[node]) {
		return ;
	}
	vis[node] = 1;
	for(auto i : grp[node]) {
		dfs(i);
	}
 
	order.pb(node);
 
}
 
void solve() {
	LL n , m;
	cin>>n>>m;
	grp = vector<vector<LL>>(n+1);
	order.clear();
	vis = vector<LL> (n+1,  0);
	vector<pair<LL,LL>> eds;
	for(int i = 0; i < m ; i++) {
		LL t , u , v;
		cin>>t>>u>>v;
		if(t) {
			grp[u - 1].pb(v - 1);
		} 
		eds.pb(mp(u - 1,v - 1));
	}
 
	for(int i = 0 ; i < n ; i++) {
		if(vis[i] == 0) 
			dfs(i);
	}
 
	reverse(aLL(order));
	vector<int> pos(n);
 
	for(int i = 0; i < n ; i++) {
		pos[order[i]] = i;
	}
	bool fl = true;
	for(int i = 0; i < n ; i++) {
		for(auto j : grp[i]) {
			if(pos[i] > pos[j]) {
				fl = false;
			}
		}
	}
 
	if(!fl) {
		cout<<"NO\n";
	} else {
		cout<<"YES\n";
		for(auto i : eds) {
			if(pos[i.first] < pos[i.second]) {
				cout<<i.first + 1<<" "<<i.second + 1<<"\n";
			} else {
				cout<<i.second + 1<<" "<<i.first + 1<<"\n";
			}
		}
	}
 
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
	// auto duration = chrono::duration_cast<chrono::miLLiseconds>(stop - start); 
	// cout << "Time taken by function: " << duration.count() << " miLLiseconds" << endl;
}