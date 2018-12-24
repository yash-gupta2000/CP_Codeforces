#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
	int n;
    cin>>n;
    
    if(n%4 == 0||n%7==0 || n % 47 == 4 || n % 47 == 7||n%47==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
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