 
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
LL dp[20][2][20][20]; 
LL go(string s,LL pos,LL tight,LL first,LL last){
	if(pos==s.length()){
		if(first==last){
			return 1;
		}
		return 0;
	}
	else if(dp[pos][tight][first][last]!=-1){
		return dp[pos][tight][first][last];
	}
	else if(tight == 1){
		LL res=0;
		for(int i=0;i<=s[pos]-'0';i++){
			LL curfirst = first;
			if(pos==0){
				curfirst = i;
			}
			if(!curfirst && i){
				curfirst = i;
			}
			if(i==s[pos]-'0'){
				res += go(s,pos+1,1,curfirst,i);
			}
			else{
				res += go(s,pos+1,0,curfirst,i);
			}
		}
		dp[pos][tight][first][last] = res;
		return res;
	}
	else{
		LL res=0;
		for(int i=0;i<=9;i++){
			LL curfirst = first;
			if(pos==0){
				curfirst = i;
			}
			if(!curfirst && i){
				curfirst = i;
			}
			res += go(s,pos+1,0,curfirst,i);
		}
		dp[pos][tight][first][last] = res;
		return res;
	}
}
void solve()
{
	 LL l,r;cin>>l>>r;
	 l--;
	 string s = to_string(l);
	 string t = to_string(r);
	 memset(dp,-1,sizeof dp);
	 LL res1 = go(s,0,1,0,0);
	 memset(dp,-1,sizeof dp);
	 LL res2 = go(t,0,1,0,0);
	 //cout<<res2<<" "<<res1<<endl;
	 cout<<res2-res1;
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