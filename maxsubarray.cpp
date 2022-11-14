#include<bits/stdc++.h>

using namespace std;

void subarray(long long arr[],long long n)
{
     for(long long i=0;i<n;i++)
     {
          for(long j=i;j<n;j++)
          {
               long long max=arr[i];
               for(long long k=i+1;k<=j;k++)
               {
                    if(arr[k]>max)
                         max=arr[k];   
               }
               cout<<max<<" ";
          }
     }
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

          cout<<"\n";
     }

     return 0;
}