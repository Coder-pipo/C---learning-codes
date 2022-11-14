#include<bits./stdc++.h>

using namespace std;

int main()
{
     long long A,B,count,m=0;
     cin>>A>>B;

     for(long long i=A;i<=B;i++)
     {
          count=0;
          long long temp=i;
          int rem=0;
          while(temp>0)
          {
               rem=temp%10;
               if(rem==4||rem==7)
                    count=1;
               else
               {
                    count=0;
                    break;
               }
               temp=temp/10;
          }

          if(count==1)
          {
               m++;
               cout<<i<<" ";
          }        
     }

     if(m==0)
          cout<<"-1";
     return 0;
     
}