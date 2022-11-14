#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long t;

     cin>>t;

     while(t--)
     {
          long long l,r;
          cin>>l>>r;
          if(l>r)
          {
               long long temp=l;
               l=r;
               r=temp;
          }
          long long sum=0;
          l=l-1;
          sum=((r*(r+1))/2)-((l*(l+1))/2);
          cout<<sum<<"\n";
     }

     return 0;
}