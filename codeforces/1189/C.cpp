#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int a[n+199];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i] += a[i-1];
        //cout<<a[i]<<endl;
    }
    
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<(a[r]-a[l-1])/10<<endl;
    }
    
}