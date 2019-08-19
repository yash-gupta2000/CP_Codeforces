#include<bits/stdc++.h>

using namespace std;
 
 
typedef long long ll;
 
 
 
void solve(){
    ll n ;
    cin>>n;
    ll a[n+1];    
 
    for (int i = 1; i <= n; ++i)
    {
        cin>>a[i];
    }
 
    for (int i = 1; i <= n - 1; ++i)
    {
        if(abs(a[i] - a[i+1]) == 1 || abs(a[i] - a[i+1] ) == n -1) {
            continue;
        }
        else {
            cout<<"NO"<<endl;
            return;
        }
    }
 
    cout<<"YES"<<endl;
}
 
int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}