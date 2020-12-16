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
const int MOD = 1e9+7;
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

void solve()
{
	 int n;cin>>n;
	 vector<int> a(n);
	 for(int i=0;i<n;i++){
		 cin>>a[i];
	 }
	 sort(all(a));
	 int res=0;
	 for(int i=0;i<n;i++){
		 int elmt = a[i];
		 int req = elmt + 2;
		 int l=0,r=n-1;
		 int idx = -1;
		 while(r>=l){
			 //cout<<l<<" "<<r<<endl;
			 int m = (l+r)/2;
			 if(a[m] <= req){
				 idx = m;
				 l = m+1;
			 }
			 else{
				 r = m-1;
			 }
		 }
		 l = i,r = idx;
		 //cout<<l<<" "<<r<<endl;
		 if(r-l+1 >= 3 && l<=r){
			 int N=r-l+1-1;
        res=(res+N*(N-1)/2);
		 }
	 }
	 cout<<res<<endl;

}
 
int32_t main()
{
	precompute();
	IOS;int t = 1;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		solve();
	}
}