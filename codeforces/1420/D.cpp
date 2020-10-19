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
#define int long long
const int N = 3e5 + 5;
const ll inf = 9e18 + 9;
const int MOD = 998244353;
int fact[N], invfact[N];
 
int pow(int a, int b, int m)
{
	int ans=1;
	while(b)
	{
		if(b&1)
			ans=(ans*a)%m;
		b/=2;
		a=(a*a)%m;
	}
	return ans;
}
 
int modinv(int k)
{
	return pow(k, MOD-2, MOD);
}
 
void precompute()
{
	fact[0]=fact[1]=1;
	for(int i=2;i<N;i++)
	{
		fact[i]=fact[i-1]*i;
		fact[i]%=MOD;
	}
	invfact[N-1]=modinv(fact[N-1]);
	for(int i=N-2;i>=0;i--)
	{
		invfact[i]=invfact[i+1]*(i+1);
		invfact[i]%=MOD;
	}
}
 
int nCr(int x, int y)
{
	if(y>x)
		return 0;
	int num=fact[x];
	num*=invfact[y];
	num%=MOD;
	num*=invfact[x-y];
	num%=MOD;
	return num;
}
vector<pair<int,int>> v;
void solve()
{
    precompute();
     int n,k;cin>>n>>k;
     for(int i=0;i<n;i++){
         int l,r;cin>>l>>r;
         v.pb({l,1});
         v.pb({r+1,-1});
     }
     sort(all(v));
     int cnt=0;
     int ans=0;
     for(int i=0;i<v.size();i++){
         if(v[i].second==1){
             if(cnt >= k-1){
                 ans += nCr(cnt,k-1);
                 ans = ans%MOD;
             }
             cnt++;
         }
         else{
             cnt--;
         }
     }
     cout<<ans<<endl;
}
 
int32_t main()
{
    IOS;ll t = 1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}