#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n;
     cin>>n;

     long long arr[n];
     for(long long i=0;i<n;i++)
          cin>>arr[i];

     long long count=0;
     for(long long i=0;i<n;i++)
     {
          for(long long j=0;j<n;j++)
          {
               if(arr[i]+1==arr[j])
               {
                    count++;
                    break;
               }
          }
     }

     cout<<count;

     return 0;
}