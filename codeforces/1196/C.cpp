#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        int left = -100000;
        int right = 100000;
        int up = 100000;
        int down = -100000;
        
        while(n--)
        {
            int x,y,fir,sec,thi,fou;
            cin>>x>>y>>fir>>sec>>thi>>fou;
            
            if(fir==0 && x>left)
            {
                left = x;
            }
            if(sec==0 && y<up)
            {
                up = y;
            }
            if(thi==0 && x<right)
            {
                right = x;
            }
            if(fou==0 && y>down)
            {
                down = y;
            }
        }
        
        if(left<=right && up>=down)
        {
            cout<<"1"<<" "<<left<<" "<<up<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
}