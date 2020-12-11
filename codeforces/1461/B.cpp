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

void solve()
{
	 int n,m;cin>>n>>m;
	 int cnt=0;
	 char a[n][m];
	 for(int i=0;i<n;i++){
		 for(int j=0;j<m;j++){
			 cin>>a[i][j];
			 if(a[i][j]=='*'){
				 cnt++;
			 }
		 }
	 }
	 int prefix[n][m];
	 for(int i=0;i<n;i++){
		 for(int j=0;j<m;j++){
			 if(a[i][j]=='*'){
				 if(j==0){
					 prefix[i][j] = 1;
				 }
				 else{
					 prefix[i][j] = prefix[i][j-1] + 1;
				 }
			 }
			 else{
				 prefix[i][j] = 0;
			 }
		 }
	 }
	//  for(int i=0;i<n;i++){
	// 	 for(int j=0;j<m;j++){
	// 		 cout<<prefix[i][j]<<" ";
	// 	 }
	// 	 cout<<endl;
	//  }
	 //cout<<cnt<<endl;
	 for(int i=0;i<n;i++){
		 for(int j=0;j<m;j++){
			 if(a[i][j]=='.'){
				 continue;
			 }
			 pair<int,int> top1 = {i,j};
			 pair<int,int> top2 = {i,j};
			 //pehle base 3 krenge phir 5...
			 while(true){
				 pair<int,int> leftmost = {top1.first + 1,top1.second-1};
				 pair<int,int> rightmost = {top2.first+1,top2.second+1};
				 if(leftmost.first < 0 || leftmost.first >= n || rightmost.first < 0 || rightmost.first >= n || leftmost.second < 0 || leftmost.second >=m || rightmost.second < 0 || rightmost.second >= m){
					 //cout<<leftmost.first<<" "<<leftmost.second<<" "<<rightmost.first<<" "<<rightmost.second<<" "<<"break"<<endl;
					 break;
				 }
				 //cout<<leftmost.first<<" "<<leftmost.second<<" "<<rightmost.first<<" "<<rightmost.second;
				 bool flag = true;
				//  for(int k=leftmost.second;k<=rightmost.second;k++){
				// 	 if(a[leftmost.first][k]=='.'){
				// 		 flag = false;
				// 		 break;
				// 	 }
				//  }
				if(leftmost.second==0){
					if((prefix[leftmost.first][rightmost.second]) != (rightmost.second-leftmost.second+1)){
						flag = false;
					}
				}
				else{
					if((prefix[leftmost.first][rightmost.second] - prefix[leftmost.first][leftmost.second-1]) != (rightmost.second-leftmost.second+1)){
						flag = false;
					}
				}
				 if(flag == true){
					 //cout<<" ran"<<endl;
					 cnt++;
					 top1.first = leftmost.first;
					 top1.second = leftmost.second;
					 top2.first = rightmost.first;
					 top2.second = rightmost.second;
				 }
				 else{
					//cout<<endl;
					 break;
				 }
			 }
		 }
	 }
	 cout<<cnt<<endl;
}
 
int32_t main()
{
	IOS;int t = 1;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		solve();
	}
}