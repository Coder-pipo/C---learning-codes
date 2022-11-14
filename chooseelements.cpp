#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n,k,m=0;
     cin>>n>>k;

     long long arr[n];
     for(long long i=0;i<n;i++)
          cin>>arr[i];

     while(m<n)
     {
          long long sum=0;
          for(long long i=m;i<k;i++)
          {
               sum+=arr[i];
          }

     }
}