//What comes fast doesn't last and What comes last will never be your past :)
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
     string s,t;
     cin>>s;
     t = "1689";
     int cnt[10];
     mem(cnt,0);
     for(int i=0;i<s.size();i++){
         cnt[s[i]-'0']++;
     }
     cnt[1]--;cnt[8]--;cnt[6]--;cnt[9]--;
     int rem=0;
     for(int i=1;i<=9;i++){
         for(int j=1;j<=cnt[i];j++){
             cout<<i;
             rem = (rem*10+i)%7;
         }
     }
     s.clear();
     s = rem + '0';
     s += t;
     while(true){
         if(stoi(s)%7==0){
             break;
         }
         bool flag = next_permutation(all(s));
         if(!flag){
             break;
         }
     }
     for(int i=1;i<=4;i++){
         cout<<s[i];
     }
     while(cnt[0]--){
         cout<<0;
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