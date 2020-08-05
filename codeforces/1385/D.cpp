 
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
int go(string s,char ch){
	if(s.size()==1){
		return s[0] != ch;
	}
	int mid = s.size()/2;
	int leftprocess = go(string(s.begin(),s.begin()+mid),ch+1);
	leftprocess += s.size()/2 - count(s.begin()+mid,s.end(),ch);
	int rigprocess = go(string(s.begin()+mid,s.end()),ch+1);
	rigprocess += s.size()/2 - count(s.begin(),s.begin()+mid,ch);
	return min(leftprocess,rigprocess);

}
void solve()
{
	 int n;cin>>n;
	 string s;cin>>s;
	 int ans = go(s,'a');
	 cout<<ans<<endl;
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