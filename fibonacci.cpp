#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long f1=0,f2=1,n;

     cin>>n;

     if(n==1)
          cout<<f1;

     else if(n==2)
          cout<<f2;
     
     else
     {
          long long f3;
          for(long long i=2;i<n;i++)
          {
               f3=f1+f2;
               f1=f2;
               f2=f3;
          }
          cout<<f3;
     }

     return 0;
}