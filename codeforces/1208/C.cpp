#include<bits/stdc++.h>
using namespace std;

int matrix[1010][1010];
int main()
{
  int count;
  cin>>count;
  int st=0;
  int x=0;
  for (int i = 0; i < count; i++)
  {
    for (int j = 0; j < count; j++)
    {
      matrix[i][j] = st;
      st += 4;
      if(st>=count*count)
      {
        x++;
        st = x;
      }
      cout<<matrix[i][j];
      cout<<" ";
    }
    cout<<endl;
  }
  
}
// #include<bits/stdc++.h>
// using namespace std;

//     int grid[1010][1010];
// int main()
// {
//     int n;
//     cin>>n;

//     int st = 0;
//     int ini = 0;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             grid[i][j] = st;
//             st+=4;
//             if(st>= n*n)
//             {
//                 ini++;
//                 st = ini;
//             }
//             cout<<grid[i][j];
//             printf(" ");
//         }
//         cout<<endl;
 
//     }
 
// }