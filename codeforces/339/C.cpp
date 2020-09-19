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
vector<int> weights;
string s;
ll m;
vector<int> ans;
void dfs(int idx,int left,int right,int prev){
    if(idx == m){
        cout<<"YES"<<endl;
        for(auto it:ans){
            cout<<it<<" ";
        }
        exit(0);
    }
    if(idx & 1){
        for(auto it:weights){
            if(it == prev){
                continue;
            }
            if(left+it>right){
            ans.pb(it);
            dfs(idx+1,left+it,right,it);
            ans.pop_back();
            }
        }
    }
    else{
        for(auto it:weights){
            if(it == prev){
                continue;
            }
            if(right+it > left){
            ans.pb(it);
            dfs(idx+1,left,right+it,it);
            ans.pop_back();
            }
        }
    }
}
void solve()
{
     cin>>s>>m;
     for(int i=0;i<s.size();i++){
         if(s[i] == '1'){
             weights.pb(i+1);
         }
     }
     dfs(0,0,0,0);
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