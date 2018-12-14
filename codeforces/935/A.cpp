#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    long long counter=0;
    cin>>n;
    for(long long i=1;i<n;i++)
    if(n%i==0)
    {
        counter++;
    }
    cout<<counter;
    return 0;
    
    
}