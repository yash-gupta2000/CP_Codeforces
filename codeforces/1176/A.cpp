#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll q,n;
    ll counter=0;
    
    cin>>q;
    while(q--)
    {   
        cin>>n;
        if(n==1)
        {
            counter=0;
            cout<<"0"<<endl;;
        }
        else
        {
        while(n!=1)
        {
            if(n%5==0)
            {
                n = (4*n)/5;
                counter++;
            }
            else if(n%3==0)
            {
                n = (2*n)/3;
                counter++;
            }
            else if(n%2==0)
            {
                n = n/2;
                counter++;
            }
            else
            {
                counter = -1;
                break;
            }
        }
        cout<<counter<<endl;
        counter=0;
        }
    }
    

}