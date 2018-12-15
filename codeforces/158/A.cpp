#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int next=0;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        {
            next++;
        }
    }
    
    cout<<next;
    return 0;
    
}