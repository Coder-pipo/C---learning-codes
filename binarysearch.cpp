#include<bits/stdc++.h>

using namespace std;

bool binary(long long arr[],long long n,long long lb,long long ub,long long item)
{
     while(lb<=ub)
     {
          long long mid=(lb+ub)/2;
          if(arr[mid]==item)
          {
               return 1;
          }

          if(item<arr[mid])
          {
               ub=mid-1;
          }

          else
          {
               lb=mid+1;
          }

     }

     return 0;
}

int main()
{
     long long n,q;
     cin>>n>>q;

     long long arr[n];
     for(int i=0;i<n;i++)
          cin>>arr[i];

     sort(arr,arr+n);

     while(q--)
     {
          long long item,lb=0,ub=n;
          cin>>item;

          int found;
          found=binary(arr,n,lb,ub,item);

          if(found==0)
               cout<<"not found"<<"\n";

          else
               cout<<"found"<<"\n";
     }

     return 0;
}