#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     long long a[n],b[n];
     for(int i=0;i<n;i++)
          cin>>a[i];

     for(int i=0;i<n;i++)
          cin>>b[i];

     sort(a,a+n);
     sort(b,b+n);

     int flag=0;
     for(int i=0;i<n;i++)
     {
          if(a[i]!=b[i])
          {
               flag=1;
               break;
          }
     }

     if(flag==0)
          cout<<"yes"<<"\n";

     else
          cout<<"no"<<"\n";


     return 0;
}