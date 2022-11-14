#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     long long arr[n];
     for(int i=0;i<n;i++)
          cin>>arr[i];

     for(int i=0;i<n;i++)
     {
          if(arr[i]==0)
          {
               if(i%2!=0)
               {
                    for(int j=0,k=i-1;j<=i/2,k>=(i/2)+1;j++,k--)
                    {
                         long long temp=arr[j];
                         arr[j]=arr[k];
                         arr[k]=temp;
                    }
               }
               else
               {
                    for(int j=0,k=i-1;j<i/2,k>=(i/2);j++,k--)
                    {
                         long long temp=arr[j];
                         arr[j]=arr[k];
                         arr[k]=temp;
                    }
               }
          }
     }

     for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";

     return 0;
}