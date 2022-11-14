#include<bits/stdc++.h>

using namespace std;

void prime(long long num)
{
     bool flag=0;
     if(num<=1)
          cout<<"NO"<<"\n";

     else
     {
          for(long long i=2;i<=sqrt(num);i++)
          {
               if(num%i==0)
               {
                    flag=1;
                    break;
               }
          }

          if(flag==0)
               cout<<"YES"<<"\n";

          else
               cout<<"NO"<<"\n";
     }
     
}

int main()
{
     long long t;
     cin>>t;
     while(t--)
     {
          long long num;
          cin>>num;
          prime(num);
     }

     return 0;
}