#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    string s;cin>>s;
    int med=0;
    for(auto &it:s)
    {
        if(it=='(')
        {
            med++;
        }
        else
        {
            med--;
        }
        if(med<-1)
        {
            cout<<"No"<<endl;
            return 0;
        }   
    }
    if(med==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
    
    
}