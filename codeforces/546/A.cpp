#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    
    int sum=0;
    int bal=0;
    
    for(int i=1;i<=w;i++)
    {
        sum= sum+(k*i);
    }
    
    bal= sum-n;
    
    if(bal>0)
    {
        cout<<bal;
    }
    else
    {
        cout<<"0";
    }
    return 0;
}