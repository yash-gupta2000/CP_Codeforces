#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	map<char,vector<int>> first;
	for(int i=0;i<n;i++)
	{
		first[s[i]].push_back(i+1);
	}
	int m;
	cin>>m;
	while(m--)
	{
		string t;
		cin>>t;
		int maximum=0;
		map<char,int> count;
		for(int i=0;i< t.length();i++)
		{
			maximum = max(maximum,first[t[i]][count[t[i]]]);
			count[t[i]]++;
		}
		
		cout<<maximum<<endl;
	}
}
