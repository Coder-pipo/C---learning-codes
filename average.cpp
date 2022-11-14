#include<bits/stdc++.h>

using namespace std;

void average(double arr[],long long n)
{
     double avg;
     double sum=0;

     for(long long i=0;i<n;i++)
     {
          sum+=arr[i];
     }

     avg=(double)sum/n;

     cout<<setprecision(8)<<avg;
}

int main()
{
     long long n;
     cin>>n;

     double arr[n];
     for(long long i=0;i<n;i++)
          cin>>arr[i];

     average(arr,n);

     return 0;
}