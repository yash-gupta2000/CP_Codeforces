 
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
	 int n,k;
	 cin>>n>>k;
	 set<int> seg;
	 int a[k+1];
	 vector<int> res[k+1];
	 for(int i=1;i<=k;i++){
		 cin>>a[i];
		 res[i].pb(a[i]);
		 seg.insert(a[i]);
	 }
	 int elmt=1;
	 for(int i=1;i<=k;i++){
		 while(res[i].size()!=n){
			 if(seg.find(elmt)==seg.end()){
				 res[i].pb(elmt);
				 elmt++;
			 }
			 else{
				 elmt++;
			 }
		 }
	 }
	 for(int i=1;i<=k;i++){
		 for(int j=0;j<res[i].size();j++){
			 cout<<res[i][j]<<" ";
		 }
		 cout<<endl;
	 }

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