#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n;
     cin>>n;

     long long arr[n];
     for(long long i=0;i<n;i++)
          cin>>arr[i];

     if(n%2==0)
     {
          for(long long i=0,j=n-1;i<=(n/2)-1,j>=(n/2);i++,j--)
               cout<<arr[i]<<" "<<arr[j]<<" ";
     }

     else
     {
          for(long long i=0,j=n-1;i<=n/2,j>=(n/2)+1;i++,j--)
               cout<<arr[i]<<" "<<arr[j]<<" ";

          cout<<arr[n/2];
     }

     return 0;
}