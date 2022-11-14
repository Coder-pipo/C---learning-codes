#include<bits/stdc++.h>

using namespace std;

long long multi(long long num)
{
     long long val=1,j=1;
     for(long long i=0;i<num;i++)
     {
          val=val*j;
          j+=2;
     }
     return val;
}

int main()
{
     long long t;

     cin>>t;

     while(t--)
     {
          long long num,ans;
          cin>>num;
          ans=multi(num);
          cout<<ans<<"\n";
     }

     return 0;

}