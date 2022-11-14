#include<bits/stdc++.h>

using namespace std;

void printevenindex(long long arr[],int n)
{
     if(n>0)
     {
          if(n%2==0)
          {
               cout<<arr[n-2]<<" ";
               printevenindex(arr,n-2);
          }
          else
          {
               cout<<arr[n-1]<<" ";
               printevenindex(arr,n-2);
          }     
     }
}

int main()
{
     int n;
     cin>>n;

     long long arr[n];
     for(int i=0;i<n;i++)
          cin>>arr[i];

     printevenindex(arr,n);

     return 0;
}