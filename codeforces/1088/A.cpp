#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n;
    cin>>n;
    
    if(n==1)
    {
        cout<<"-1";
    }
    else
    {
        b=2;
        a=n-(n%2);
        cout<<a<<endl;
        cout<<b;
    }
    
    
    return 0;
   
    
}