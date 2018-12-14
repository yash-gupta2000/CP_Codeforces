#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    int counter=0;
    
    while(a<=b)
    {
        a=a*3;
        b=2*b;
        counter++;
    }
    
    cout<<counter;
    return 0;
    
    
}