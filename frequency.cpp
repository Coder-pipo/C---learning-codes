#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n,m;
     cin>>n>>m;

     long long arr[n];
     for(long long i=0;i<n;i++)
          cin>>arr[i];

     for(long long i=1;i<=m;i++)
     {
          long long count=0;
          for(long long j=0;j<n;j++)
          {
               if(i==arr[j])
               {
                    count++;
                    arr[j]=99999999;ad
               }
          }
          cout<<count<<"\n";
     }

     return 0;
}