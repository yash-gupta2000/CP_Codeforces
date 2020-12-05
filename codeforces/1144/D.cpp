/*
author: Yash Gupta
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) x.begin(), x.end()
#define IOS                  \
	ios::sync_with_stdio(0); \
	cin.tie(0);              \
	cout.tie(0);
#define endl "\n"
#define mem(x, y) memset(x, y, sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 2e5 + 5;
const int inf = 9e18 + 9;
const int mod = 1e9 + 7;
vector<int> a;

void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> hash(200005,0);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		hash[a[i]]++;
	}
	int idx,freq=0;
	for(int i=0;i<n;i++){
		if(hash[a[i]] > freq){
			freq = hash[a[i]];
			idx = i;
		}
	}
	int changes = n-freq;
	cout<<changes<<endl;
	//cout<<idx<<endl;
	if(changes){
		for(int i=idx-1;i>=0;i--){
			if(a[i] > a[i+1]){
				cout<<2<<" "<<i+1<<" "<<i+1+1<<endl;
			}
			else if(a[i]<a[i+1]){
				cout<<1<<" "<<i+1<<" "<<i+1+1<<endl;
			}
			a[i] = a[i+1];
		}
		for(int i=idx+1;i<n;i++){
			if(a[i] < a[i-1]){
				cout<<1<<" "<<i+1<<" "<<i<<endl;
			}
			else if(a[i] > a[i-1]){
				cout<<2<<" "<<i+1<<" "<<i<<endl;
			}
			a[i] = a[i-1];
		}
	}
	
}

int32_t main()
{
	IOS;
	int t = 1;
	// cin>>t;
	for (int i = 1; i <= t; i++)
	{
		solve();
	}
}