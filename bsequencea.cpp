#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long M,N,k=0;
     cin>>M>>N;

     long long A[M],B[N];
     for(long long i=0;i<M;i++)
          cin>>A[i];
     for(long long i=0;i<N;i++)
          cin>>B[i];

     int found=0;
     for(long long j=0;j<N;j++)
     {
          for(long long i=k;i<M;i++)
          {
               if(B[j]==A[i])
               {
                    k=i;
                    found=1;
                    break;
               }
               else
                    found=0;
          }
     }

     if(found==1)
          cout<<"YES\n";

     else
          cout<<"NO\n";

     return 0;
}