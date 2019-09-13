#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll;
 
ll sumd(ll a) 
{ 
	ll sum = 0; 
	while (a) 
	{ 
		sum += a % 10; 
		a /= 10; 
	} 
	return sum; 
} 

ll findMax(ll x) 
{ 
	ll b = 1, ans = x; 
	while (x) 
	{ 
		ll cur = (x - 1) * b + (b - 1); 

		if (sumd(cur) > sumd(ans) || 
		(sumd(cur) == sumd(ans) && 
			cur > ans)) 
			ans = cur; 

		x /= 10; 
		b *= 10; 
	} 

	return ans; 
} 

int main() 
{ 
	ll n;cin>>n;
	cout << findMax(n); 
	return 0; 
} 
