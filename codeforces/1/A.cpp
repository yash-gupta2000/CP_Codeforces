#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    long long t=0;
    long long q=0;
        if(n%a==0)
        {
            t=n/a;
        }
        else
        {
            t=(n/a)+1;
        }
    
        if(m%a==0)
        {
            q=t*(m/a);
        }
        else
        {
            q=t*((m/a)+1);
        }
     cout<<q;
   
    
}