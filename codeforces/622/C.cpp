#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n+1],b[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b[0] = -1;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            b[i] = i-1;
        }
        else
        {
            b[i] = b[i-1];
        }
        
    }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<b[i]<<endl;
    // // }
    while(q--)
    {
        int l,r,val;
        scanf("%d%d%d",&l,&r,&val);
        l--;r--;
        if(a[r]!=val)
        {
            printf("%d\n",r+1);
        }
        else if(b[r]>=l)
        {
            printf("%d\n",b[r]+1);
        }
        else
        {
            printf("-1\n");
        }
        
        
    }
      
}