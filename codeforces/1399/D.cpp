 
//It doesn't matter how slow you go, Unless you don't stop.
#include<bits/stdc++.h>
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
#define rep(i,s,e) for(long long i=s;i<=e;i++)
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
void solve()
{
	 LL n;cin>>n;
	 string s;cin>>s;
	 vector<LL> res(n);
	 stack<LL> zero,one;
	 for(int i=0;i<n;i++){
		 res[i] = i;
	 }
	 LL curr=0;
	 for(int i=0;i<n;i++){
		 if(s[i] == '0'){
			 if(!zero.empty()){
				//  cout<<curr<<endl;
				 res[i] = zero.top();
				 zero.pop();
				 one.push(res[i]);
				 continue;
			 }
			 else{
				//  cout<<curr<<endl;
				//  for(auto it:zero){
				// 	 cout<<it<<" ";
				//  }
				 res[i] = ++curr;
				 one.push(res[i]);
				 continue;
			 }
		 }
		 else
		 {
			 if(!one.empty()){
				//  cout<<curr<<endl;
				 res[i] = one.top();
				 one.pop();
				 zero.push(res[i]);
				 continue;
			 }
			 else{
				// for(auto it:one){
				// 	 cout<<it<<" ";
				//  }
				// cout<<curr<<endl;
				 res[i] = ++curr;
				 zero.push(res[i]);
				 continue;
			 }
		 }
		 
	 }
	 cout<<curr<<endl;
	 for(int i=0;i<n;i++){
		 cout<<res[i]<<" ";
	 }
	 cout<<endl;
	 return;
	 
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