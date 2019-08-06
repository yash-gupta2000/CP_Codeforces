#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	// for(int i=1;i<=n;i++)
	// {
	// 	b[i] = a[i-1]-a[i];
	// }
	vector<int> x;
	for(int i=1;i<n;i++)
	 {
	 	x.push_back(a[i-1]-a[i]);
	 }
	
	sort(x.begin(),x.end());
	
	int ans = a[n-1]-a[0];
	for(int i=0;i<k-1;i++)
	{
		ans += x[i];
	}
	cout<<ans<<endl;
	
}