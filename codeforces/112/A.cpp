#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
 int x=0;
   string s,s2;
   cin>>s>>s2;
   transform(s.begin(),s.end(),s.begin(),::tolower);
   transform(s2.begin(),s2.end(),s2.begin(),::tolower);
   for(int i=0;i<s.length();i++)
   {
       if(s[i]>s2[i])
       {
           x= 1; 
           break;
          
       }
       else if(s[i]<s2[i])
       {
           x=-1;
           break;
          
       } 
       else
       x=0;
       
       
   }
   cout<<x;
  return 0;
}