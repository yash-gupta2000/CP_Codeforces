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
     int n;cin>>n;
     vector<int> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int leftmost,rightmost;
     for(int i=0;i<n;i++){
         if(a[i] == 1){
             leftmost = i;
             break;
         }
     }
     for(int i=n-1;i>=0;i--){
         if(a[i] == 1){
             rightmost = i;
             break;
         }
     }
     int cnt=0;
     for(int i=leftmost;i<=rightmost;i++){
         if(a[i] == 0){
             cnt++;
         }
     }
     cout<<cnt<<endl;

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