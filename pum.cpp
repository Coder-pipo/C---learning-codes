#include<bits./stdc++.h>

using namespace std;

int main()
{
     long long N,k=0;

     cin>>N;

     for(long long i=1;i<=N;i++)
     {
          long long count=0;
          while(long long j=k+1)
          {
               if(count==3)
               {
                    cout<<"PUM"<<"\n"; 
                    k=j;
                    break;
               }
               cout<<j<<" ";
               k++;
               count++;
          }     
     }

     return 0;
}