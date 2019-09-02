#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll n,k;
        cin>>n>>k;
        if(k%3!=0)
        {
            if(n%3==0)
            {
                cout<<"Bob"<<endl;
            }
            else
            {
                cout<<"Alice"<<endl;
            }
        }
        else
        {
            int x = (n%(k+1));
            if(x%3==0 && x!=k)
            {
                cout<<"Bob"<<endl;
            }
            else
            {
                cout<<"Alice"<<endl;
            }
            
        }  
        
    }
}