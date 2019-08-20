 #include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i;
	cin>>n;
	long long a,m=0,c=0;
	for(i=0;i<n;i++)
	{
		cin>>a;
		m=__gcd(m,a);
	}
	for(i=1;i<=sqrt(m);i++)
	{
		if(m%i==0) 
		{
			c++;
			if(i*i!=m) c++;
		}
	}
	
	cout<<c;
	return 0;
}