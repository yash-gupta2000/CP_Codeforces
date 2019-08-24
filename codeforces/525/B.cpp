#include<bits/stdc++.h>
using namespace std;


int main()
{
    string a;
    cin>>a;
    vector<int> mm(a.length()+1, 0);
    bool cr = false;
    
    int n;
    cin>>n;
    int l = a.length();
    while(n--)
    {
        int x;cin>>x;
        mm[x-1] =mm[x-1] ^ 1;
        int cd = mm[l-x+1] ^ 1;
        mm[l - x + 1] = cd;
	  }


    for(int i = 0; i < a.length(); i++) {
      cr = cr ^ mm[i];
      if(cr)
        cout<<a[l-i -1];
      else
        cout<<a[i];
    }
}            
    
