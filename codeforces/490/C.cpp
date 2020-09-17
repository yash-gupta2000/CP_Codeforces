//It's really tough
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 2e5 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;

void solve()
{
     string s;cin>>s;
     ll a,b;cin>>a>>b;
     vector<int> pref(s.size());
     vector<int> suff(s.size());
     ll curr=0;
     for(int i=0;i<s.size();i++){
         curr = (10*curr + s[i]-'0')%a;
         if(curr == 0 && s[i+1] != '0' && i+1<s.size()){
             pref[i] = 1;
         }
     }
     curr = 0;
     ll dummy=1;
     for(int i=s.size()-1;i>=0;i--){
         curr = ((s[i]-'0')*dummy + curr)%b;
         if(curr == 0){
             suff[i]   = 1;
         }
         dummy *= 10;
         dummy %= b;
     }
     for(int i=0;i<s.size();i++){
         if(pref[i]==1 && suff[i+1]==1){
             //cout<<i<<endl;
             cout<<"YES"<<endl;
             cout<<s.substr(0,i+1)<<endl;
             cout<<s.substr(i+1,s.size())<<endl;
             return;
         }
     }
     cout<<"NO"<<endl;

}
 
int main()
{
    IOS;ll t = 1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}