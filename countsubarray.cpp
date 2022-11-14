#include<bits/stdc++.h>

using namespace std;

void subarray(long long arr[],long long n)
{
     long long count=0;
     for(long long i=0;i<n;i++)
     {
          for(long j=i;j<n;j++)
          {
               if(i==j)
                    count++;

               else
               {
                    int flag=0;
                    for(long long k=i;k<j;k++)
                    {
                         if(arr[k]>arr[k+1])
                         {
                              flag=1;
                              break;
                         }
                    }
                    if(flag==0)
                         count++;
               } 
          }
     }
     
     cout<<count<<"\n";
}

int main()
{
     long long t;
     cin>>t;

     while(t--)
     {
          long long n;
          cin>>n;

          long long arr[n];
          for(long long i=0;i<n;i++)
               cin>>arr[i];

          subarray(arr,n);
     }

     return 0;
}