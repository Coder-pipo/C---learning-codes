#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     if(n%2!=0)
     {
          for(int i=0;i<=n/2;i++)
          {
               for(int j=0;j<n;j++)
               {
                    if((i==j)&&(i==n/2))
                         cout<<"X";

                    else if(i==j)
                         cout<<"\\";

                    else if(i+j+1==n)
                         cout<<"/";

                    else
                         cout<<"*";
               }

               cout<<"\n";
          }

          for(int i=(n/2)+1;i<n;i++)
          {
               for(int j=0;j<n;j++)
               {
                    if(i==j)
                         cout<<"\\";

                    else if(i+j+1==n)
                         cout<<"/";

                    else
                         cout<<"*";
               }

               cout<<"\n";
          }
     }

     return 0;
}