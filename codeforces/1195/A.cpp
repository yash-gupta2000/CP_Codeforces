#include<bits/stdc++.h>
using namespace std;
int n,k,c[1001],a,b;
int main(){
    cin>>n>>k;
    for(int x,i=1;i<=n;++i)cin>>x,c[x]++;
    for(int i=1;i<=k;++i)a+=c[i]/2*2,b+=c[i]%2;
    cout<<a+(b+1)/2;
}