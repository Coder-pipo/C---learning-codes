#include<bits./stdc++.h>

using namespace std;

int main()
{
     char S;
     long long N;

     cin>>S;
     cin>>N;

     long long num[N];
     for(long long i=0;i<N;i++)
     {
          cin>>num[i];
     }

     for(long long i=0;i<N;i++)
     {
          for(long long j=0;j<num[i];j++)
          {
               cout<<S;
          }
          cout<<endl;
     }

     return 0;
}