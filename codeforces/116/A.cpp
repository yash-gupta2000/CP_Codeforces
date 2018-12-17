#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve(){
	int n;
    cin>>n;
    int a[100000],b[1000000];
    int max=0;
    int x=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for (int i = 0; i < n ; i++) {
        
        x=x+(b[i]-a[i]);
        if(x>max)
        {
            max=x;
        }
    } 
    cout<<max;
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