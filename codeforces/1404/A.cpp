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
vector<int> a;

void solve()
{
     int n,k;cin>>n>>k;
     string s;cin>>s;
     int cntx=0,cnty=0;
     for(int i=0;i<k;i++){
         int zero = 0, one = 0;
         for(int j=i;j<n;j += k){
             if(s[j] == '1'){
                 one++;
             }
             else if(s[j] == '0'){
                 zero++;
             }
         }
         //cout<<zero<<" "<<one<<endl;
         if(zero>0 && one>0){
             cout<<"NO"<<endl;
             return;
             // ambiguity at substring[i]th character and substring[i+k]th character
         }
         if(zero){
             cntx++;
         }
         else if(one){
             cnty++;
         }
     }

     if(2*cntx > k || 2*cnty > k){
         cout<<"NO"<<endl;
     }
     else{
         cout<<"YES"<<endl;
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