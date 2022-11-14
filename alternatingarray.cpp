#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n;
     cin>>n;

     int arr[n];
     for(long long i=0;i<n;i++)
          cin>>arr[i];

     long long count=0;
     int temp=0;
     for(long long i=0;i<n;i++)
     {
          if(i==0)
               temp=arr[i];

          else
          {
               if((temp>0&&arr[i]>0)||(temp<0&&arr[i]<0))
               {
                    arr[i]*=-1;
                    temp=arr[i];
               }
                    
          }
     }

     for(long long i=0;i<n;i++)
          cout<<arr[i]<<" ";

     cout<<"\n"<<count;

     return 0;
}