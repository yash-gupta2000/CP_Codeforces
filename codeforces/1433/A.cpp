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
    string s;cin>>s;
     int cnt_4 = 10;
     int cnt_3 = 6;
     int cnt_2 = 3;
     int cnt_1 = 1;
     if(s.size()==4){
         int num = s[0]-'0';
         int ans = (cnt_4 * num);
         cout<<ans<<endl;
         return;
     }
     else if(s.size()==3){
         int num = s[0]-'0';
         int ans  =(cnt_4 * (num-1));
         cout<<ans + cnt_3<<endl;
     }
     else if(s.size()==2){
         int num = s[0]-'0';
         //cout<<num<<endl;
         int ans = (cnt_4 * (num-1));
         //cout<<ans<<endl;
         cout<<ans + cnt_2<<endl;
     }
     else{
         int num = s[0]-'0';
         int ans = (cnt_4*(num-1));
         cout<<ans + cnt_1<<endl;
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