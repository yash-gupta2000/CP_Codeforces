//Currently in Spain, But S is silent :|
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
     int n,k;cin>>n>>k;
     string s;cin>>s;
     int pos = n-1;
     s[pos]++;
     while(pos >= 0 && pos<n){
         if(s[pos]-'a' >= k){
             s[pos] = 'a';
             pos--;
             if(pos >= 0){
                 s[pos]++;
             }
         }
         else if(pos>0 && s[pos]==s[pos-1]){
             s[pos]++;
         }
         else if(pos>1 && s[pos]==s[pos-2]){
             s[pos]++;
         }
         else{
             pos++;
         }
     }
     if(pos<0){
         cout<<"NO"<<endl;
     }
     else{
         cout<<s;
     }
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