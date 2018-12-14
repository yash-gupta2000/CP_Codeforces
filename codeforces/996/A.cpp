#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long amt;
    long long counter=0;
    cin>>amt;
    
    if(amt>=100)
    {
        counter=counter + (amt/100);
        amt=amt%100;
        
    }
    if(amt>=20)
    {
        counter=counter + (amt/20);
        amt=amt%20;
        
    }
    if(amt>=10)
    {
        counter=counter +(amt/10);
        amt=amt%10;
    }
    if(amt>=5)
    {
        counter=counter +(amt/5);
        amt=amt%5;
    }
    if(amt>=1)
    {
        counter=counter +(amt/1);
        
    }
    
    cout<<counter;
    return 0;
    
    
}