#include<bits/stdc++.h>

using namespace std;

long long summation(long long arr[],int n)
{
     if(n<=0)
          return 0;

     return (summation(arr,n-1)+arr[n-1]);
     
}

int main()
{
     int n;
     cin>>n;

     long long arr[n];
     for(int i=0;i<n;i++)
          cin>>arr[i];

     cout<<summation(arr,n);

     return 0;
}