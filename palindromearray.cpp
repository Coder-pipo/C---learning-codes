#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n;
     cin>>n;

     long long arr[n];
     for(long long i=0;i<n;i++)
          cin>>arr[i];

     int flag=0;
     if(n%2==0)
     {
          for(long long i=0,j=n-1;i<n/2,j>=n/2;i++,j--)
          {
               if(arr[i]!=arr[j])
               {
                    flag=1;
                    break;
               }
          }
     }

     else
     {
          for(long long i=0,j=n-1;i<=n/2,j>=n/2;i++,j--)
          {
               if(arr[i]!=arr[j])
               {
                    flag=1;
                    break;
               }
          }
     }
     
     if(flag==0)
          cout<<"YES\n";

     else
          cout<<"NO\n";

     return 0;
}