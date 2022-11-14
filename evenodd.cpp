#include<bits/stdc++.h>

using namespace std;

int main()
{
     unsigned long long n,k,num;

     cin>>n>>k;

     if(n%2==0)
     {
          if(k<=n/2)
          {
               num=1+(k-1)*2;
          }
          else
          {
               n=k-(n/2);
               num=2+(n-1)*2;
          }     
     }

     else
     {
          if(k<=(n/2)+1)
          {
               num=1+(k-1)*2;
          }
          else
          {
               n=k-((n/2)+1);
               num=2+(n-1)*2;
          }  
     }

     cout<<num;

     return 0;
}