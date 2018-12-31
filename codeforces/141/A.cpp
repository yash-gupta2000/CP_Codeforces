#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() 
{
        string a,b,c,d;
        cin>>a;
        cin>>b;
        cin>>d;
        c=a+b;
        int lx,ly;
        lx=c.length();
        ly=d.length();
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
        int counter=0;
        if(lx==ly)
        {
        for(int i=0;i<lx;i++)
        {
            if(c[i]==d[i])
            {
                counter=1;
            }
            else
            {
                counter=0;
                break;
            }
            
        }
        }
       
        if(counter==1)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
    
        
}