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
	string str;
    cin >> str;
    int n;
	n = str.size();
	for(int i=0;i<n-2;i++) {
		if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B') str[i] = str[i+1] = str[i+2] = ' ';
	}
	cout << str;
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
	