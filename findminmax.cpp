#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n,j,k;
     cin>>n;

     long long arr[n];
     for(long long i=0;i<n;i++)
          cin>>arr[i];

     long long min=arr[0],max=arr[0];
     for(long long i=0;i<n;i++)
     {
          if(arr[i]<min)
          {
               min=arr[i];
               j=i;
          }

          if(arr[i]>max)
          {
               max=arr[i];
               k=i;
          }    
     }

     arr[j]=max;
     arr[k]=min;

     for(long long i=0;i<n;i++)
          cout<<arr[i]<<" ";

     return 0;
}