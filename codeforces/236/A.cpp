#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int n = a.length();
    sort(a.begin(),a.end());
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    
    return 0;
}