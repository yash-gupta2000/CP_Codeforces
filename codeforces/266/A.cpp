#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count=0;
	int ans;

	for(int i=0;i<n;i++)
	{
		if(s[i]==s[i+1])
		{
			count++;
		}
	}
	ans=count;
	if(count>0)
	{
		cout<<ans;
	}
	else
	{
		cout<<0;
	}
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
    
   	freopen("input.txt", "r", stdin);
    
	freopen("output.txt", "w", stdout);
	#endif
	ll t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
	return 0;
}