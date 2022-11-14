#include<bits/stdc++.h>

using namespace std;

void print(long long num)
{
     int val;
     
          if(num>0)
          {
               print(num/10);
               val=num%10;
               cout<<val<<" ";
          }
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long long num;
          cin>>num;

          if(num==0)
               cout<<0;
          else
               print(num);
          cout<<"\n";
     }

     return 0;
}