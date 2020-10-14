/*
author: Yash Gupta
*/
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
     int n;cin>>n;
     string s;cin>>s;
     ll currsum=0;
     ll cnt=0;
     map<ll,ll> prevsum;
     for(int i=0;i<n;i++){
         currsum += (s[i]-'0')-1;//Each character contributes 1 to the length, so if we decrease it's contribution then problem boils down to no. of 
         //subarrays with 0 sum which can be found using map.
         if(currsum == 0){
             cnt++;
         }
         if(prevsum.find(currsum)!=prevsum.end()){
             cnt += prevsum[currsum];
         }
         prevsum[currsum]++;
     }
     cout<<cnt<<endl;
}
 
int main()
{
    IOS;ll t = 1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}