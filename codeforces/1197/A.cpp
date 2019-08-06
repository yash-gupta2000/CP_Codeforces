#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		
		cout<<min(a[n-2]-1,n-2)<<endl;
	}
}