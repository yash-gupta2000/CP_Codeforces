#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve()
{
	string s;
	cin>>s;
	char b[10000];
	int j =0;

	for (int i = 0; i < s.length(); i++)
	{
		if(s[i]!='+')
		{
			b[j]=s[i];
			j++;
		}
	}
	sort(b , b + j);

	for (int i = 0; i < j; i++)
	{
		if(s.length()>1)
		{
			cout<<b[i];
			if(i < j - 1)
			    cout<<"+";
		}
		else
		{
			cout<<b[i];
		}
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