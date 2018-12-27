#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long ans=0;
	
	if(n==1)
	{
	    cout<<"-1";
	}
	else if(n%2==0)
	{
	    ans=n/2;
	    cout<<ans;
	}
	else
	{
	    ans=ceil(n/2)+1;
	    cout<<"-"<<ans;
	}
	return 0;
}