#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,count=0;
    cin>>x;
    while(x!=1)
    {
        if(x%2!=0)
            count++;
        x/=2;
    }
    cout<<count+1;
}