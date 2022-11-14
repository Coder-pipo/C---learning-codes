#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n,m;
     cin>>n>>m;

     long long mat[n][m];
     for(long long i=0;i<n;i++)
     {
          for(long long j=0;j<m;j++)
               cin>>mat[i][j];
     }

     long long num;
     cin>>num;

     for(long long i=0;i<n;i++)
     {
          for(long long j=0;j<m;j++)
          {
               if(mat[i][j]==num)
               {
                    cout<<"will not take number";
                    return 0;
               }
 
          }
     }

     cout<<"will take number";
     return 0;
}