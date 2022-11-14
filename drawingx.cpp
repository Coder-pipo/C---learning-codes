#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     if(n%2!=0)
     {
          for(int i=0;i<n;i++)
          {
               for(int j=0;j<n;j++)
               {
                    if(i==j&&(i!=n/2)&&(j!=n/2))
                         cout<<"\\";

                    for(int k=0;k<j-i-1;k++)
                         cout<<"*";

                    for(int k=j+1;k<n-1;k++)
                         cout<<"*";
               }
               cout<<"\n";
          }
     }
}