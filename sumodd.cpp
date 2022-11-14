#include<bits./stdc++.h>

using namespace std;

int main()
{
     long long T;

     cin>>T;
     while(T--)
     {
          long long A,B;
          cin>>A>>B;

          if(A<B)
          {
               long long sum=0;
               for(long long i=A+1;i<B;i++)
               {
                    if(i%2!=0)
                    {
                         sum+=i;
                    }
               }
               cout<<sum<<"\n";
          }
          else
          {
               long long sum=0;
               for(long long i=B+1;i<A;i++)
               {
                    if(i%2!=0)
                    {
                         sum+=i;
                    }
               }
               cout<<sum<<"\n";
          }
     }
     return 0;
}