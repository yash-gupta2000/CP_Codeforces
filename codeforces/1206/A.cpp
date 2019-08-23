#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    vector <int> x;
    vector <int> y;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        x.push_back(input);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int input;
        cin>>input;
        y.push_back(input);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    int sizex = x.size();
    int sizey = y.size();

    cout<<x[sizex-1]<<" "<<y[sizey-1];
    



}