#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    int cntx=0,cnty=0;
    int a,b;
    while(q--)
    {
        
        cin>>a>>b;
        
        if(a>b)
        {
            cntx++;
        }
        else if(b>a)
        {
            cnty++;
        }
        
    }
    if(cntx>cnty)
        {
            cout<<"Mishka"<<endl;
        }
        else if(cntx<cnty)
        {
            cout<<"Chris"<<endl;
        }
        else
        {
            cout<<"Friendship is magic!^^"<<endl;
        }
}