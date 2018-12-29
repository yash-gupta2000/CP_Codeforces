#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() 
{
        int n;
        cin>>n;
        int k;
        cin>>k;
        int a[n];
        int counter=1;
        int x=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
            for(int j=0;j<n-1;j++)
            {
                if(a[j]!=a[j+1])
                {
                    counter++;
                }
                else
                {
                    if(counter>x)
                    {
                        x=counter;
                    }
                    counter=1;
                    
                }
            }
            if(counter>x)
            {
                x=counter;
            }
        cout<<x;
	
}