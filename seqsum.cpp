#include<bits./stdc++.h>

using namespace std;

int main()
{
     long long n,m;

     while(1)
     {
          cin>>n>>m;
          if(n<=0 || m<=0)
               break;

          else
          {
               if(n>m)
               {
                    long long sum=0;
                    for(long long i=m;i<=n;i++)
                    {
                         cout<<i<<" ";
                         sum+=i;
                    }
                    cout<<"sum ="<<sum<<endl;
               }
               else
               {
                   long long sum=0;
                    for(long long i=n;i<=m;i++)
                    {
                         cout<<i<<" ";
                         sum+=i;
                    }
                    cout<<"sum ="<<sum<<endl; 
               }
          }
     }
     return 0;
     
}