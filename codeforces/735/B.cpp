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
const int N = 2e5 + 5;
const int inf = 9e18 + 9;
const int mod = 1e9+7;
vector<int> a;

void solve()
{
	 int n,x,y;
	 cin>>n>>x>>y;
	 if(x>y){
		 swap(x,y);
	 }
	 vector<int> a(n);
	 for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	 sort(all(a),greater<int>());
	 int i=0;
	 vector<int> fr;
	 vector<int> sc;
	 while(i<n && fr.size()<x){
		 fr.pb(a[i]);
		 i++;
	 }	 
	 while(i<n && sc.size()<y){
		 sc.pb(a[i]);
		 i++;
	 }
	 //cout<<fr.size()<<" "<<sc.size()<<endl;
	//  if(fr.size()<x){
	// 	 while(fr.size()<x){
	// 		 fr.pb(a[i]);
	// 		 i++;
	// 	 }
	//  }
	//  if(sc.size()<y){
	// 	 while(sc.size()<y){
	// 		 sc.pb(a[i]);
	// 		 i++;
	// 	 }
	//  }
	 double mean1=0,mean2=0;
	 for(auto it:fr){
		 mean1 += it;
	 }
	 mean1 = (double)mean1/(double)fr.size();
	 for(auto it:sc){
		 mean2 += it;
	 }
	 mean2 = (double)mean2/(double)sc.size();
	 //cout<<mean1<<" "<<mean2<<endl;
	 cout<<fixed<<setprecision(10)<<mean1+mean2<<endl;

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