#include<bits/stdc++.h>

using namespace std;

void shiftright(long long arr[],int n)
{
     long long last=arr[n-1];
     for(long long i=n-1;i>=0;i--)
          arr[i]=arr[i-1];

     arr[0]=last;
}

int main()
{
     int n,x;
     cin>>n>>x;

     long long arr[n];
     for(long long i=0;i<n;i++)
          cin>>arr[i];

     while(x--)
     {
          shiftright(arr,n);
     }

     for(long long i=0;i<n;i++)
          cout<<arr[i]<<" ";

     return 0;
}