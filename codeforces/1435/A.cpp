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
int lcm(int a,int b){
    int product = a*b;
    int gcd = __gcd(a,b);
    return product/gcd;
}
void solve()
{
     int n;cin>>n;
     vector<int> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     for(int i=0;i<n-1;i += 2){
         int first = a[i];
         int second = a[i+1];
         int LCM = lcm(abs(first),abs(second));
         if((first < 0 && second > 0)){
             cout<<-(LCM/first)<<" "<<LCM/second<<" ";
         }
         else if(first > 0 && second < 0){
             cout<<(LCM/first)<<" "<<-(LCM/second)<<" ";
         }
         else{
             cout<<-(LCM/first)<<" "<<LCM/second<<" ";
         }
     }
     cout<<endl;
     

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