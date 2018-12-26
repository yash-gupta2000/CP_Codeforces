#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
	
	int a[n];
	int i=1;
	for(i=1;i<=n;i++)
	{
	    cin>>a[i];
	}
	for(int x=1;x<=n;x++)
	{
	for(i=1; i<=n;i++)
	{
	    if(a[i]==x)
	    {
	        cout<<i<<" ";
	    }
	}
	}
	return 0;
}