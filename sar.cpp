#include<bits./stdc++.h>

using namespace std;

int main()
{
     int tests,i;

     cin>>tests;
     for(i=1;i<=tests;++i)
     {
          long long num,j,sum=1;
          cin>>num;
          for(j=2;j<num;j++)
          {
               if(num%j==0)
                    sum+=j;
          }
          if(sum==num)
               cout<<"YES"<<endl;
          else
               cout<<"NO"<<endl;
     }
     return 0;
}