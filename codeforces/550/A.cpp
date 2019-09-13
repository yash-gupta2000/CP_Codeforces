
#include <bits/stdc++.h> 
using namespace std; 

bool isValid(char s[]) 
{ 
	char* p; 
	if ((p = strstr(s, "AB")) && (strstr(p + 2, "BA")))
    {
        return true;
    } 	 
    else if((p = strstr(s, "BA")) && (strstr(p + 2, "AB")))
    {
        return true;
    }

	return false; 
} 

int main() 
{ 
	char s[1000005];
    cin>>s;
	if (isValid(s)) 
		cout << "YES"; 
	else
		cout << "NO"; 

	return 0; 
} 
