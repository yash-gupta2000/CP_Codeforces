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
    int a,b;cin>>a>>b;
    int A = a,B= b;
     //int A,B;cin>>A>>B;
     int j = 0, x = 0; 
     while (A || B) { 
        if ((A & 1) && (B & 1)) { 
            x += (1 << j); 
        } 
        A >>= 1; 
        B >>= 1; 
        j += 1; 
    } 
    int ans = (a^x) + (b^x);
    cout<<ans<<endl;
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