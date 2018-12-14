#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]=="Tetrahedron")
        {
            sum= sum+4;
        }
        else if(a[i]=="Cube")
        {
            sum= sum+6;
        }
        else if(a[i]=="Octahedron")
        {
            sum= sum+8;
        }
        else if(a[i]=="Icosahedron")
        {
            sum= sum+20;
        }
        else
        {
            sum = sum +12;
        }
        
    }
    cout<<sum;
    return 0;
    
    
}