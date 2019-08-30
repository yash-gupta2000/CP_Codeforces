# include <iostream>
using namespace std;
long long int n,m,a,b,k,i,x[500100];
int main (){
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>m;
		x[i]=m+x[i-1];
	}
	for (i=1;i<n;i++){
		if (3*x[i]==2*x[n]) k+=a;
		if (3*x[i]==x[n]) a++;
	}
	cout<<k;
}