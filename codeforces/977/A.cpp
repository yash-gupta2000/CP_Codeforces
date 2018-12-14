#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int k;
    cin>>k;
    
    for(int i=0;i<k;i++)
    {
        if(n%10!=0)
        {
           n--; 
        }
        else
        {
            n=n/10;
        }
        
    }
    
    cout<<n;
    return 0;
    
}