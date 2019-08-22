#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int q;
    cin>>q;
    while(q--)
    {
        
    int b,p,c,px,py;
    cin>>b>>p>>c>>px>>py;
    int total=0;
    b = b/2;
     if(px>py)
     {
         while(b!=0 && p!=0)
         {
            total += px;
             b--;
             p--;
         }
         while(b!=0 && c!=0)
         {
             total += py;
             b--;
             c--;
         }
        
        
     }
    else
    {
        while(b!=0 && c!=0)
        {
            total += py;
            b--;
            c--;
        }
        while(b!=0 && p!=0)
        {
            total += px;
            b--;
            p--;
        }
    }
    cout<<total<<endl;
    }
}