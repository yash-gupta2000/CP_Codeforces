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
		int size = 4*n;
		int a[4*n+10000];
		for(int i=0;i<size;i++)
		{
			cin>>a[i];
		}
		sort(a,a+size);
		bool x=false;
		for(int i=1;i<size;i += 2)
		{
			if(a[i]!=a[i-1])
			{
				x=true;
			}
		}
		if(x)
		{
			cout<<"NO"<<endl;
			continue;
		}
		int i = 0, j = size - 1;
	ll area = a[i] * a[j];
		while (i < j) 
		{
			if (a[i] * a[j] != area)
			{
			x = true;
			}
			i = i+2;
			j = j-2;
		}
		if (x)cout << "NO"<<endl;
		else cout << "YES"<<endl;
		
	}
}