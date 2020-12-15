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
bool check(vector<int> temp){
	set<int> t;
	int sze = temp.size();
	for(auto it:temp){
		t.insert(it);
	}
	if(t.size()==sze){
		return true;
	}
	return false;
}
void print_possible_change(vector<int> &change, int beginWith, int value, vector<vector<int>> &res, vector<int> &temp){
	if(value == 0){
		res.pb(temp);
	}

	for(int i = beginWith; i < change.size() && change[i] <= value; ++i){
		temp.push_back(change[i]);
		print_possible_change(change, i, value - change[i], res, temp);
		temp.pop_back();
	}
}
int stringTointeger(string str) 
{ 
    int temp = 0; 
    for (int i = 0; i < str.length(); i++) { 
        temp = temp * 10 + (str[i] - '0'); 
    } 
    return temp; 
} 
void solve()
{
	 int n;cin>>n;
	 if(n > 45){
		 cout<<"-1"<<endl;
		 return;
	 }
	 vector<int> a;
	 for(int i=1;i<10;i++){
		 a.pb(i);
	 }
	 vector<vector<int>> res;
	 vector<int> curr;
	 print_possible_change(a,0,n,res,curr);
	 int mnsize = 100;
	//  for(auto it:res){
	// 	 for(auto x:it){
	// 		 cout<<x<<" ";
	// 	 }
	// 	 cout<<endl;
	//  }
	 string ans="";
	 vector<int> h;
	 for(auto it:res){
		 if(check(it)){
			 string curr;
			 for(auto x:it){
				 curr += to_string(x);
			 }
			 int number = stringTointeger(curr);
			 h.pb(number);
		 }
	 }
	 sort(all(h));
	 if(h.size() > 0){
		 cout<<h[0]<<endl;
	 }
	 else{
		 cout<<"-1"<<endl;
	 }


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