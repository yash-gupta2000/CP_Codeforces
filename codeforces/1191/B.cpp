#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    
    int a[3];
    for(int i=0;i<3;i++)
    {
        cin>>s;
        a[i] = (s[0]-'0')+(s[1]-'a')*1000;
        //cout<<a[i]<<endl;
    }
    sort(a,a+3);
    int t1=a[1]-a[0];
    int t2=a[2]-a[1];
    
    if(t1==t2&&(t1==1||t1==0))
    { cout<<"0";
    }
    else if(t1==0||t1==1||t1==2||t2==0||t2==1||t2==2)
    {
        cout<<"1";
    }
    else
    {
        cout<<"2";
    }
}