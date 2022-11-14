#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long a,b;
     cin>>a>>b;

     long long c_even=0,c_odd=0;

     if(a<b)
     {
          for(long long i=2;i<=a+b+1;i++)
          {
               if(i%2==0)
                    c_even++;

               else
                    c_odd++;
          }
     }
     else if(a>=b)
     {
          for(long long i=1;i<=a+b;i++)
          {
               if(i%2==0)
                    c_even++;

               else
                    c_odd++;
          }
     }

     if(a==0&&b==0)
     {
          cout<<"NO";
          return 0;
     }


     if(c_odd==a&&c_even==b)
          cout<<"YES";

     else
          cout<<"NO";
     
     

     return 0;
}