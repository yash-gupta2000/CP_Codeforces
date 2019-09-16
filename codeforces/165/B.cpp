#include <bits/stdc++.h>
using namespace std;
 
int low,hi,n,m,sum,ans,k;

int main()
{
    cin>>n>>k;
    hi = n;
    while(low<hi)
    {
        m=ans=(low+hi)>>1;
        for(sum=0;ans!=0;ans/=k)
        {
            sum += ans;
        }
        if(sum>=n)
        {
            hi = m;
        }
        else
        {
            low = m+1;
        }

    }
    cout<<low<<endl;
}