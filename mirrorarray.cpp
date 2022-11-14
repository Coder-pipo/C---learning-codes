#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long M,N;
     cin>>M>>N;

     long long mat[M][N];
     for(long long i=0;i<M;i++)
     {
          for(long long j=0;j<N;j++)
               cin>>mat[i][j];
     }

     for(long long i=0;i<M;i++)
     {
          for(long long j=N-1;j>=0;j--)
               cout<<mat[i][j]<<" ";
          cout<<"\n";
     }

     return 0;
}