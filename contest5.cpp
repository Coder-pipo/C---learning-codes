#include<bits/stdc++.h>

using namespace std;

void primesieve(long long l,long long r,long long k)
{
     int arr[200]={0},count=0;

     for(int i=l;i<=r;i++)
     {
          for(int j=i*i;j<=r;j+=i){
               arr[j]++;
          }
     }

     for(int i=l;i<=r;i++)
     {
          if(arr[i]==k)
               count++;
     }
     cout<<count<<" ";

}

int main()
{
     long long t;

     cin>>t;

     while(t--)
     {
          long long l,r,k;
          cin>>l>>r>>k;
          primesieve(l,r,k);
     }
     

     return 0;
}