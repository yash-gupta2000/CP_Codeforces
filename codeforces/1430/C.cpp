/*
author: Yash Gupta
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define mem(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
const int N = 2e5 + 5;
const ll inf = 9e18 + 9;
const int mod = 1e9+7;
ll res;
void solve()
{
     int n;cin>>n;
     if(n==2){
         cout<<"2"<<endl;
         cout<<"1"<<" "<<"2"<<endl;
         return;
     }
     set<int> s;
     for(int i=1;i<=n;i++){
         s.insert(i);
     }
     int iterations = n-1;
     cout<<"2"<<endl;
     while(s.size()!=1){
         //cout<<"ran"<<endl;
         set<int>::reverse_iterator rit;
         int first = *s.rbegin();
         //cout<<first<<endl;
         s.erase(first);
         int second = 0;
         //int cnt=0;
         for(rit = s.rbegin();rit!=s.rend();rit++){
            //  if(cnt==0){
            //      cnt += 1;
            //      continue;
            //  }
             //cout<<*rit<<" ";
             if((*rit + first)%2==0){
                 //cout<<*rit<<endl;
                 second = *rit;
                 break;
             }
         }
         s.erase(second);
         cout<<first<<" "<<second<<endl;
         int sze = s.size();
         int insertto = (first+second)/2;
         s.insert(insertto);
         if(s.size()==sze){
             //s.erase(*s.rbegin());
             cout<<insertto<<" "<<insertto<<endl;
            //  for(auto it:s){
            //      cout<<it<<" ";
            //  }
            //  cout<<endl;
             //s.insert(insertto); 
         }        
     }
}
 
int main()
{
    IOS;ll t = 1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}