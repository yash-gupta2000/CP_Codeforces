                                                    //(👍≖‿‿≖)👍 👍(≖‿‿≖👍)//
												          //┌∩┐(ಠ_ಠ)┌∩┐//


//─────────────────────────────────────────────────────────────────────────────────────────────────
//─████████──████████─██████████████─██████████████───██████████████─██████████████─██████████████─
//─██░░░░██──██░░░░██─██░░░░░░░░░░██─██░░░░░░░░░░██───██░░░░░░░░░░██─██░░░░░░░░░░██─██░░░░░░░░░░██─
//─████░░██──██░░████─██░░██████████─██░░██████░░██───██░░██████░░██─██░░██████████─██░░██████████─
//───██░░░░██░░░░██───██░░██─────────██░░██──██░░██───██░░██──██░░██─██░░██─────────██░░██─────────
//───████░░░░░░████───██░░██─────────██░░██████░░████─██░░██──██░░██─██░░██████████─██░░██████████─
//─────████░░████─────██░░██──██████─██░░░░░░░░░░░░██─██░░██──██░░██─██░░░░░░░░░░██─██░░░░░░░░░░██─
//───────██░░██───────██░░██──██░░██─██░░████████░░██─██░░██──██░░██─██████████░░██─██████████░░██─
//───────██░░██───────██░░██──██░░██─██░░██────██░░██─██░░██──██░░██─────────██░░██─────────██░░██─
//───────██░░██───────██░░██████░░██─██░░████████░░██─██░░██████░░██─██████████░░██─██████████░░██─
//───────██░░██───────██░░░░░░░░░░██─██░░░░░░░░░░░░██─██░░░░░░░░░░██─██░░░░░░░░░░██─██░░░░░░░░░░██─
//───────██████───────██████████████─████████████████─██████████████─██████████████─██████████████─
//─────────────────────────────────────────────────────────────────────────────────────────────────

#include "bits/stdc++.h"
using namespace std;

typedef long long ll;

const int N = 2 * 1e5 + 10;

ll res;
ll a[N];


void solve()
{
	string s;
   cin>>s;
   string t[5];
   string u;
   int j=0;
   int counter=0;
   for(int i=0;i<5;i++)
   {
       cin>>t[i];
       u=u+t[i];
   }
   for(int i=0;i<u.length();i++)
   {
       if(s[j]==u[i] || s[j+1]==u[i])
       {
           counter++;
       }
   }
   if(counter>0)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
    
   	 freopen("input.txt", "r", stdin);
    
    	freopen("output.txt", "w", stdout);
	#endif
	ll t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
//──────────────────────────────────────────────
//─██████████████─██████████████─██████████████─
//─██░░░░░░░░░░██─██░░░░░░░░░░██─██░░░░░░░░░░██─
//─██░░██████░░██─██░░██████░░██─██████████░░██─
//─██░░██──██░░██─██░░██──██░░██─────────██░░██─
//─██░░██──██░░██─██░░██──██░░██─────────██░░██─
//─██░░██──██░░██─██░░██──██░░██─────────██░░██─
//─██░░██──██░░██─██░░██──██░░██─────────██░░██─
//─██░░██──██░░██─██░░██──██░░██─────────██░░██─
//─██░░██████░░██─██░░██████░░██─────────██░░██─
//─██░░░░░░░░░░██─██░░░░░░░░░░██─────────██░░██─
//─██████████████─██████████████─────────██████─
//──────────────────────────────────────────────
													//(👍≖‿‿≖)👍 👍(≖‿‿≖👍)//
															//┌∩┐(ಠ_ಠ)┌∩┐//
	