#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,len;
    cin>>n>>len;
    int ans=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n);
    
    ans = 2*max(a[0],len-a[n-1]);
    for(int i=0;i<n-1;i++)
    {
        ans = max(ans,a[i+1]-a[i]);    
    }
    
    printf("%.10f\n",ans/2.);
}