#include<bits/stdc++.h>
using namespace std;

int main()
{
    int even,odd,sum;
    cin>>even>>odd;
    if(even==0 && odd==0)
    {
        cout<<"NO"<<endl;
    }
    else if(abs(even-odd)==1 || abs(even-odd)==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}