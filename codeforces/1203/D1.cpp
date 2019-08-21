#include<bits/stdc++.h>
using namespace std;
string s,t;
int main()
{
    cin>>s>>t;
    int l=0;
    int r=1;
    while(l+r<=(int)s.length()){
        string dummy=s;
        dummy.erase(l,r);
        int k=0;
        for(int i=0;i<(int)dummy.length();i++){
            if(dummy[i]==t[k])
            {
                k++;
            }
        }
        if(k!=(int)t.length())
        {
            l++;
        }
        else
        {
            r++;
        }
    }
    cout<<r-1<<endl;
}