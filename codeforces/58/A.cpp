#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    a="hello";
    cin>>b;
    int j=0;
    int counter=0;
    
    for(int i=0;i<100;i++)
    {
        if(b[i]==a[j])
        {
            counter++;
            j++;
        }
    }
    if(counter>4)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
    
}