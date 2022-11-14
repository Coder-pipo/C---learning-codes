#include<bits./stdc++.h>

using namespace std;

int main()
{
     long long T,rev,rem;

     cin>>T;

     long long num[T];

     for(long long i=0;i<T;i++)
     {
          cin>>num[i];
     }

     long long i=0;
     while(i<T)
     {
          if(num[i]==0)
               cout<<num[i];

          else
          {
               while(num[i]>0)
               {
                    rem=num[i]%10;
                    cout<<rem<<" ";
                    num[i]=num[i]/10;
               }
          }
          cout<<"\n";
          i++;
     }
}