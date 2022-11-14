#include<bits/stdc++.h>

using namespace std;

long long maximum=INT_MIN;

long long maximum(long long arr[],int n)
{
     if(n<0)
          return max;

     maximum=max(max,arr[n-1]);
}

int main()
{
     int n;
     cin>>n;

     long long arr[n];
     for(int i=0;i<n;i++)
          cin>>arr[i];

     cout<<maximum(arr,n);

     return 0;
}