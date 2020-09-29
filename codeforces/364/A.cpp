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
     ll a;cin>>a;
     string s;cin>>s;
     int n = s.size();
     int cnt[9*n+5];
     mem(cnt,0);
     for(int i=0;i<n;i++){
         ll curr=0;
         for(int j=i;j<n;j++){
             curr += (s[j]-'0');
             cnt[curr]++;
         }
     }
     res=0;
     if(a==0){
         for(int rowsum=0;rowsum<9*n+5;rowsum++){
             for(int colsum=0;colsum<9*n+5;colsum++){
                 if(rowsum>0 && colsum>0){
                     break;
                 }
                 res += cnt[rowsum]*(ll)cnt[colsum];
             }
         }
     }
     else{
         for(int rowsum=1;rowsum<9*n+5;rowsum++){
             if(a%rowsum == 0 && a/rowsum < 9*n+5){
                 res += cnt[rowsum]*(ll)cnt[a/rowsum];
             }
         }
     }
     cout<<res<<endl;

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