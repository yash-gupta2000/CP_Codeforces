#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cin>>day;
    char a[day];
    int i=0;
    int cx=0;
    int cy=0;
    
    for(i=0;i<day;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<day;i++)
    {
        if(a[i]=='S' && a[i+1]=='F')
        {
            cx++;
        }
        
    }
    for(i=0;i<day;i++)
    {
        if(a[i]=='F' && a[i+1]=='S')
        {
            cy++;
        }
    }
    
    if(cx>cy)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
    
    
}