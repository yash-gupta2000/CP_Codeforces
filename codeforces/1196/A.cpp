#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll q;
    cin>>q;
    while(q--)
    {
        ll first,second,third,ans,mediator;
        cin>>first>>second>>third;
        mediator = first+second+third;
        
        ans = mediator/2;
        cout<<ans<<endl;
    }
    

}