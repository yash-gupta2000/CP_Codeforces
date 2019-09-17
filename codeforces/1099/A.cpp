#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int w,h;
    int swx,shx;
    int swy,shy;
    cin>>w>>h>>swx>>shx>>swy>>shy;
    
    for(int i=h;i>=0;i--)
    {
        w += i;
        if(i==shx)
        {
            w -= swx;
        }
        if(i==shy)
        {
            w -= swy;
        }
        w = max(w,0);
    }

    cout<<w<<endl;
}