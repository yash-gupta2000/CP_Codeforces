#include<bits/stdc++.h>
using namespace std;
int main(){
int q;
	cin>>q;
	
	while(q--) {
		string s, t, p;
		unordered_map<char, int> mp;
		
		cin>>s;
		cin>>t;
		cin>>p;
		
		for(char c: p)
			mp[c]++;
		
		for(int i = 0; i < t.size(); i++) {
			
			if(s[i]!=t[i]) {
				if(mp[t[i]]>0) {
					mp[t[i]]--;
					s.insert(i, 1, t[i]);
				} else {
					break;
				}
			}
		}
		
		if(s == t) {
			cout<<"YES"<<endl;
		} else {
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
	}