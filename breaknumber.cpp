#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n,max=0;
     cin>>n;

     while(n--)
     {
          long long num,count=0;
          cin>>num;

          while(num%2==0)
          {
               num/=2;
               count++;
          }
          
          if(max<count)
               max=count;
          
     }

     cout<<max;
     return 0;
}