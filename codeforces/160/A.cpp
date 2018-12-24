#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    sort(a,a+n);
    int sumx=0;
    int counter=0;
    
    for(int i = n-1; i >= 0 ;i--)
    {
        if(sum >= sumx)
        {
            sum=sum-a[i];
            sumx+=a[i];
            counter++;
        }
        else
            break;
    }
    cout<<counter;
    
    return 0;
}