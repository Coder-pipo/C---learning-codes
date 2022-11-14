#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long t,num,rem;

     cin>>t;
     while(t--)
     {
          cin>>num;
          int count=0;

          while(num>0)
          {
               rem=num%2;
               if(rem==1)
                    count++;
               num=num/2;
          }

          int ans=0;
          for(long long i=0;i<count;i++)
          {
               ans=ans+pow(2,i);
          }
          cout<<ans<<"\n";
     }
     
}