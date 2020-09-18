//It's really tough
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
     vector<int> a(n);
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     sort(all(a));
     if(a.size()==1){
         cout<<"-1"<<endl;
         return;
     }
     //either 0,1,2,3.
     vector<int> diff(n);
     set<int> distinct;
     for(int i=1;i<n;i++){
         diff[i-1] = a[i]-a[i-1];
         distinct.insert(diff[i-1]);
     }
     if(distinct.size() > 2){
         cout<<"0"<<endl;
         return;
     }
     else if(distinct.size()==1){
         auto it = distinct.begin();
         if(*it == 0){
             cout<<"1"<<endl;
             cout<<a[0]<<endl;
             //return;
         } 
         else if(*it%2 && n==2){
             cout<<"2"<<endl;
             cout<<a[0]-*it<<" "<<a[n-1]+*it<<endl;
         }
         else if(*it%2==0 && n==2){
             cout<<"3"<<endl;
             cout<<a[0]-*it<<" "<<(a[0]+a[1])/2 <<" "<<a[1]+*it<<endl;
         }
         else if(n>2){
             cout<<"2"<<endl;
             cout<<a[0]-*it<<" "<<a[n-1]+*it<<endl;
         }
     }
     else if(distinct.size()==2){
         //cout<<"ran"<<endl;
         auto it = distinct.begin();
         int elmt = *it;
         int cnt_elmt=0;
         ++it;
         int elmt2 = *it;
         int cnt_elmt2=0;
         for(auto x:diff){
             if(x == elmt){
                 cnt_elmt++;
             }
             else if(elmt2==x){
                 cnt_elmt2++;
             }
         }
         //cout<<elmt2<<endl;
         if(cnt_elmt > 1 && cnt_elmt2 > 1){
             cout<<"0"<<endl;
             //return;
         }
         else if(cnt_elmt == 1 && elmt>elmt2 && elmt%2==0 && elmt/2 == elmt2){
             //cout<<"ran"<<endl;
             cout<<"1"<<endl;
             for(int i=0;i<diff.size();i++){
                 if(elmt == diff[i]){
                     cout<<(a[i+1]+a[i])/2<<endl;
                 }
             }
             //return;
         }
         else if(cnt_elmt2 == 1 && elmt2 > elmt && elmt2%2==0 && elmt2/2 == elmt){
             cout<<"1"<<endl;
             for(int i=0;i<diff.size();i++){
                 if(elmt2 == diff[i]){
                     //cout<<i<<endl;
                     cout<<(a[i+1]+a[i])/2<<endl;
                 }
             }
             //return;
         }
         else{
             cout<<"0"<<endl;
         }
         
     }

     
}
 
int main()
{
    IOS;ll t = 1;
    // cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}