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
     string s;cin>>s;
     ll nb,ns,nc,cb,cs,cc,total;
     cin>>nb>>ns>>nc>>cb>>cs>>cc>>total;
     //Binary Search
     map<char,int> m;
     for(int i=0;i<s.size();i++){
         m[s[i]]++;
     }
     ll l=0,r=1e15;
     while(r > l+1){
         ll cnt=0;
         ll mid = (l+r)/2;
         if(mid*m['B']-nb>0){
             cnt += (mid*m['B']-nb)*cb;
         }
         if(mid*m['S']-ns>0){
             cnt += (mid*m['S']-ns)*cs;
         }
         if(mid*m['C']-nc>0){
             cnt += (mid*m['C']-nc)*cc;
         }   
         if(cnt <= total){
             l = mid;
         }      
         else{
             r = mid;
         }      
     }
     cout<<l<<endl;
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