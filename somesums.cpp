#include<bits./stdc++.h>

using namespace std;

int main()
{
     long long N,A,B,s=0;

     cin>>N>>A>>B;

     for(long long i=1;i<=N;i++)
     {
          long long num=i;
          long long sum=0;
          while(num>0)
          {
               int rem=num%10;
               sum+=rem;
               num/=10;
          }
          if(sum>=A&&sum<=B)
          {
               s+=i;
          }
     }
     cout<<s;

     return 0;
}