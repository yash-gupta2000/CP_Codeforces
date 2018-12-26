#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    long long counter=0;
    cin>>x;
    
    if(x>=5)
    {
        counter=counter + (x/5);
        x=x%5;
    }
    if(x>=4)
    {
        counter=counter + (x/4);
        x=x%4;
    }
    if(x>=3)
    {
        counter=counter + (x/3);
        x=x%3;
    }
    if(x>=2)
    {
        counter=counter + (x/2);
        x=x%2;
    }
    if(x>=1)
    {
        counter=counter + (x/1);
        x=x%1;
    }
    
    cout<<counter;
    return 0;
    
    
}