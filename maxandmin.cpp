#include<bits/stdc++.h>

using namespace std;

long long maximum(long long arr[],long long n)
{
     long long max=arr[0];

     for(long long i=1;i<n;i++)
     {
          if(arr[i]>max)
               max=arr[i];
     }

     return max;
}

long long minimum(long long arr[],long long n)
{
     long long min=arr[0];

     for(long long i=1;i<n;i++)
     {
          if(arr[i]<min)
               min=arr[i];
     }

     return min;
}

int main()
{
     long long n;
     cin>>n;

     long long arr[n];
     for(long long i=0;i<n;i++)
          cin>>arr[i];

     long long max,min;

     max=maximum(arr,n);
     min=minimum(arr,n);

     cout<<min<<" "<<max;

     return 0;
}