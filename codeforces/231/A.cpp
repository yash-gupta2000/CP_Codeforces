#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int counter=0;
    
    int x,y,z;
    
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        
        if((x+y+z)>1)
        {
            counter++;
        }
    }
    cout<<counter;
    return 0;
    
    
}