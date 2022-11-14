#include<bits/stdc++.h>

using namespace std;

void shift_zeros(int arr[],int n)
{
     for(int i=n-1;i>=0;i--)
     {
          if(arr[i]==0)
          {
               int last=arr[i];
               for(int j=i;j<n;j++)
                    arr[j]=arr[j+1];
               arr[n-1]=last;
          }
     }
}

int main()
{
     int n;
     cin>>n;

     int arr[n];
     for(int i=0;i<n;i++)
          cin>>arr[i];

     shift_zeros(arr,n);

     for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";

     return 0;
}