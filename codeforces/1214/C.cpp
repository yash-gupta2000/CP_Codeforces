#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    vector<char> v(n);
    int cntx=0,cnty=0;
    for(auto &it:v)
    {
        cin>>it;
        if(it=='(')
        {
            cntx++;
        }
        else
        {
            cnty++;
        }  
    }
    if(cntx!=cnty)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    stack<char> s;

    for(int i=0;i<n;i++)
    {
        if(s.empty()||s.top()==v[i])
        {
            s.push(v[i]);
        }
        else if(s.top()=='(' && v[i]==')')
        {
            s.pop();
        }
        else
        {
            s.push(v[i]);
        }
    }
    if(s.size()==2 ||s.size()==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
}