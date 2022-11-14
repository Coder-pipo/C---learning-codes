#include<bits./stdc++.h>

using namespace std;

int main()
{
     long long N;

     cin>>N;

     for(long long i=0;i<N;i++)
     {
          for(long long j=0;j<N-i;j++)
          {
               cout<<"*";
          }
          cout<<"\n";
     }

     return 0;
}