#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int index = std::distance(a, max_element(a,a+n));
	int flag=0;
	for(int i=index;i<n-1;i++)
	{
		if(a[i]<=a[i+1])
		{
			flag=1;
			break;
		}
	}
	for(int i=0;i<index-1;i++)
	{
		if(a[i]>=a[i+1])
		{
			flag=1;
			break;
			
		}
	}
	
	if(flag==1)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
}