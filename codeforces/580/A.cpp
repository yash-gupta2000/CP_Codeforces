#include<bits/stdc++.h>
using namespace std;
const long long A=100000000000000LL,N=228228;
 
long long a[N],k,x,i,j,n,m;

 
int main(){
	cin>>n;
	for(i=0;i<n;i++)cin>>a[i];
	k=1;
	for(i=1;i<n;i++)
	{
	    if(a[i]>=a[i-1])
	    {
	        k++;
	    }
	    else 
	    {
	        x=max(x,k);
	        k=1;
	    }
	}
	x=max(x,k);
	cout<<x;
	return 0;
}