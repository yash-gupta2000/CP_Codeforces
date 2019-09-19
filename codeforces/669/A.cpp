#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;cin>>n;
    int i=0;int cnt=0;
    while(n!=0)
    {
        if(i%2==0)
        {
            if(n>=1)
            {
                n -= 1;
                i++;cnt++;
            }
            else
            {
                break;
            }
            
            
        }
        else if(i%2==1)
        {
            if(n>=2)
            {
                n -=2;
                i++;cnt++;
            }
            else
            {
                break;
            }
            
            
        }
        
    }

    cout<<cnt<<endl;

}