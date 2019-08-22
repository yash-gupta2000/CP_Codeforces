#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	set<int> x;
	if(a[0]!=1)
	{
	    x.insert(a[0]-1);
	}
	else
	{
	    x.insert(a[0]);
	}
	
	int prev=1;
	for(int i=1;i<n;i++)
	{
	    if(a[i]!=1)
	    {
	        x.insert(a[i]-1);
	        if(x.size()!=prev)
	        {
	            prev++;
	            continue;
	        }
	    }
	    if(a[i])
	    {
	        x.insert(a[i]);
	        if(x.size()!=prev)
	        {
	            prev++;
	            continue;
	        }
	    }
	    
	    x.insert(a[i]+1);
	    prev = x.size();
	   // cout<<a[i]<<endl;
	   // cout<<x.size()<<"GG"<<endl;
	    
	}
	
	
	cout<<x.size()<<endl;
}
