#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n;
     cin>>n;

     long long mat[n][n];
     for(long long i=0;i<n;i++)
     {
          for(long long j=0;j<n;j++)
               cin>>mat[i][j];
     }

     long long sum1=0,sum2=0;
     for(long long i=0;i<n;i++)
     {
          for(long long j=0;j<n;j++)
          {
               if(i==j)
                    sum1+=mat[i][j];

               if(i+j+1==n)
                    sum2+=mat[i][j];
          }
     }

     long long diff=sum1-sum2;

     if(diff<0)
          diff=-diff;

     cout<<diff;

     return 0;
}