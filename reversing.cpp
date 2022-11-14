#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n;
     cin>>n;

     long long arr1[n],arr2[n];
     for(long long i=0;i<n;i++)
          cin>>arr1[i];

     for(long long i=0;i<n;i++)
     {
          long long k=0;
          if(arr1[i]==0)
          {
               for(long long j=i;j>=0;j--)
               {
                    arr2[k++]=arr1[j];
               }
          }
          else
               arr2[k++]=arr1[k++];
     }

     for(long long i=0;i<n;i++)
     {
          cout<<arr2[i]<<" ";
     }

     return 0;
}