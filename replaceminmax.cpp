#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n;
     cin>>n;

     long long arr[n];
     for(long long i=0;i<n;i++)
          cin>>arr[i];

     long long min=arr[0],max=arr[0],k,l;
     for(long long i=0;i<n;i++)
     {
          if(arr[i]<=min)
          {
               min=arr[i];
               k=i;
          }
     }

     for(long long i=0;i<n;i++)
     {
          if(arr[i]>=max)
          {
               max=arr[i];
               l=i;
          }
     }

     long long temp=arr[l];
     arr[l]=arr[k];
     arr[k]=temp;

     for(long long i=0;i<n;i++)
          cout<<arr[i]<<" ";

     return 0;
}