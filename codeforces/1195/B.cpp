#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,k;
    cin>>n>>k;
    
    if(n==1)
    {
        cout<<"0"<<endl;
        return 0;
    }
    
    ll added=0,add=1,eaten=n;
    while(1)
    {
        added += add;
        add++;
        eaten--;
        if(added-eaten==k && added>=eaten)
        {
            break;
        }
    }
    cout<<eaten<<endl;
}
