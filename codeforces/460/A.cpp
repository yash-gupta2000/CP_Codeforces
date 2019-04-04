#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int days=n;
    int px=n/m;
    int temp = 0;
    temp = n/m;
    while(px != 0)
    {
       days++;
       px--;
       if(days/m - temp > 0){
           px++;
           temp = days/m;
       }
    }
    
    cout<<days;
    
    
}