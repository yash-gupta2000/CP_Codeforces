#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll cost=0;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            cost += -1-(a[i]);
            a[i] = -1;
        }
        else if(a[i]>0)
        {
            cost += a[i]-1;
            a[i] = 1;
        }

    }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    ll min=0,plus=0,zero=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]== -1)
        {
            min++;
        }
        else if(a[i]== +1)
        {
            plus++;
        }
        else
        {
            zero++;
        }
        
        
    }

    if(min%2!=0 && zero!=0)
    {
        cost++;
        zero--;
        min++;
    }
    else if(min%2!=0 && zero==0)
    {
        cost += 2;
        min--;
        plus--;
    }

    if(zero!=0)
    {
        cost += zero;
    }
    cout<<cost<<endl;
    
}