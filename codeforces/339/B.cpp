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
	ll n,m;
    cin>>n;
    cin>>m;
    ll a[m];
    for(ll i=0;i<m;i++)
    {
        cin>>a[i];
    }
    ll t=a[0]-1;
    
    for(ll i=0;i<m-1;i++)
    {
        if(a[i]<a[i+1])
        {
            t = t + (a[i+1]-a[i]);
        }
        else if(a[i]>a[i+1])
        {
            t = t+((n-a[i]+1)+(a[i+1]-1));
        }
        else
        {
            t=t+0;
        }
    }
    
    cout<<t;
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
	