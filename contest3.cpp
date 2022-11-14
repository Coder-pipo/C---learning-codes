#include<bits/stdc++.h>

using namespace std;

void primesieve(int n)
{
     int arr[200]={0};

     for(int i=2;i<=n;i++)
     {
          for(int j=i*i;j<=n;j+=i){
               arr[j]=1;
          }
     }

     for(int i=2;i<=n;i++)
     {
          if(arr[i]==0){
               cout<<i<<" ";
          }
     }

}

int main()
{
     long long num;

     cin>>num;

     primesieve(num);

     return 0;
}