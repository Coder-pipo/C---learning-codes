#include<bits/stdc++.h>

using namespace std;

long long power(int x,int p)
{
     long long result=1;
     for(int i=0;i<p;i++)
          result=result*x;

     return result;     
}

int main()
{
     int x,n;
     cin>>x>>n;

     long long sum=0;
     for(int i=0;i<=n;i+=2)
     {
          if(i==0)
               sum+=power(x,i)-1;

          else
               sum+=power(x,i);
     }

     cout<<sum;

     return 0;
}