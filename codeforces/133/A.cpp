#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
	cin>>s;
	int counter=0;

	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
		{
			counter=1;
			break;
		}

		else
		{
			counter=0;
		}
	}

	if(counter==1)

	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
    return 0;
}