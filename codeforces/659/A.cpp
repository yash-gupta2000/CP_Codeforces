#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
	a--;
	b%=n;
	int ans=(a+b+n)%n;
	cout<<ans+1;
    
    

}