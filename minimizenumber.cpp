#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n;
     cin>>n;

     long long arr[n];
     for(long long i=0;i<n;i++)
          cin>>arr[i];

     int flag=0,count=0;
     while(flag==0)
     {
          for(long long i=0;i<n;i++)
          {
               if(arr[i]%2!=0)
               {
                    flag=1;
                    break;
               }
               else
                    arr[i]=arr[i]/2;
          }
          if(flag==0)
               count++;
     }
     
     cout<<count;
     return 0;
}