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
	long long n;
    cin>>n;
    long long ans=0;
	
	if(n==1)
	{
	    cout<<"-1";
	}
	else if(n%2==0)
	{
	    ans=n/2;
	    cout<<ans;
	}
	else
	{
	    ans=ceil(n/2)+1;
	    cout<<"-"<<ans;
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
	