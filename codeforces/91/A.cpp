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
//vector<int> a;
void solve()
{    
    set<int> s[30];
     string a,b;
     cin>>a>>b;
     for(int i=0;i<a.size();i++){
         s[a[i]-'a'].insert(i);
     }
     int prev = -1, cnt=1;
     for(int i=0;i<b.size();i++){
         if(s[b[i]-'a'].empty()){
             cout<<"-1"<<endl;
             return;
         }
         else if(s[b[i]-'a'].upper_bound(prev) == s[b[i]-'a'].end()){
             //cout<<i<<"ran"<<endl;
             prev = -1;
             cnt++;
         }
        prev = *s[b[i]-'a'].upper_bound(prev);
     }
     cout<<cnt<<endl;

}
 
int32_t main()
{
    IOS;int t = 1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}