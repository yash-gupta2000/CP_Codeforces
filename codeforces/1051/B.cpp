#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll l,r;
    cin>>l>>r;
    ll prs = (r-l+1)/2;
    int k=0;
    // if((r-l+1)&1)
    // {
    //     cout<<"NO"<<endl;
    //     return 0;
    // }
    cout<<"YES"<<endl;
        for(int i=0;i<prs;i++)
        {
              cout<<l+2*i<<" "<<l+2*i+1<<endl;
            
        }
    
    
}