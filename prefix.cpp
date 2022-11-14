#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n;

     cin>>n;

     long long cost[n]={0},pf[n+1]={0},s[n+1]={0},sor[n+1]={0};

     for(long long i=1;i<=n;i++)
     {
          cin>>cost[i];
          pf[i]=pf[i-1]+cost[i];
          
          s[i]=cost[i];

     }

     sort(s,s+n+1);

     for(int i=0;i<n;i++)
     {
          cout<<s[i];
     }

     for(long long i=1;i<=n;i++)
     {
          sor[i]=sor[i-1]+s[i];
     }

     long long t,temp;
     cin>>t;

     temp=t;
     long long diff[t]={0};

     while(t>0)
     {
          long long type,l,r;
          cin>>type>>l>>r;
          if(type==1)
          {
               diff[t]=pf[r]-pf[l-1];
          }

          else
          {
               diff[t]=sor[r]-sor[l-1];
          }
          t--;
     }

     for(long long i=temp;i>0;i--)
          cout<<diff[i]<<"\n";

}