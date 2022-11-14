#include<bits./stdc++.h>

using namespace std;

int main()
{
     long long n;

     cin>>n;

     for(long long i=0;i<n;i++)
     {
          for(long long j=0;j<n-i-1;j++)
               cout<<" ";

          for(long long k=0;k<=i;k++)
               cout<<"*";

          for(long long l=0;l<i;l++)
               cout<<"*";

          cout<<"\n";
     }

     return 0;
}