#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int a[m];
    int d;
    int x=1000000;
    
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    
    for(int i=0;i<m-n+1;i++)
    {
        d=a[i+n-1]-a[i];
        if(x>d)
        {
            x=d;
        }
    }
    
    cout<<x;
    return 0;
}
