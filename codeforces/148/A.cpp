#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){

	int k,l,m,n,total;
    cin>>k>>l>>m>>n;
    cin>>total;
    int counter=0;
    
    for(int i=1;i<=total;i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            counter++;
        }
    }
    
    cout<<counter;
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