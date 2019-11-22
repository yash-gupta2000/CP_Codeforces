 
//It doesn't matter how slow you go, Unless you don't stop.
#include<iostream>
#include<algorithm>
#include<bitset>
#include<bits/stdc++.h>
 
#include<cmath>
#include<cstring>
#include<climits>
 
#include<deque>
#include<queue>
#include<vector>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
 
#include<fstream>
#include<chrono>
using namespace std;
 
typedef long long ll;

 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i,s,e) for(long long i=s;i<=e;i++)
#define brep(i,s,e) for(long long i=s;i>=e;i--)
#define all(x) x.begin(),x.end()
#define mem(x,y) memset(x,y,sizeof(x))
#define DANGER std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
stack<ll> l[127],r[127];
stack<ll> x,y;
 
void check(stack<ll> &s1, stack<ll> &s2)
{
	while(!s1.empty() && !s2.empty())
	{
		x.push(s1.top());
		y.push(s2.top());
		s1.pop();
		s2.pop();
	}
}

void solve()
{
     ll n;
	cin>>n;
	string s1,s2;	
	cin>>s1>>s2;
 
    for(ll i=0;i<n;i++)
    {
        l[s1[i]].push(i);
        r[s2[i]].push(i);
    }
	for(ll i='a';i<='z';i++)
	{
		check(l[i],r[i]);
		check(l[i],r['?']);
		check(l['?'],r[i]);
	}
	check(l['?'],r['?']);
	cout<<y.size()<<"\n";
	while(!x.empty())
	{
		cout<<x.top()+1<<" "<<y.top()+1<<"\n";
		x.pop();
		y.pop();
	}
}
 
int main()
{
    DANGER;
    ofstream out("output.txt");
 
    auto start = chrono::high_resolution_clock::now();
    
    ll t = 1;
    // cin>>t;
    rep(test,1,t)
    {
        solve();
    }
    
    auto stop = chrono::high_resolution_clock::now();
    // auto duration = chrono::duration_cast<chrono::milliseconds>(stop - start); 
    // cout << "Time taken by function: " << duration.count() << " milliseconds" << endl;
}