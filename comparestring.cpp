#include<bits/stdc++.h>

using namespace std;

int main()
{
     string x,y;
     cin>>x;
     cin>>y;

     if(x.size()==y.size())
     {
          if(x==y)
               cout<<x;

          else
          {
               for(int i=0,j=0;x[i]!='\0',y[j]!='\0';i++,j++)
               {
                    if(x[i]==y[j])
                         continue;

                    else if(x[i]<y[j])
                    {
                         cout<<x;
                         return 0;
                    }

                    else
                    {
                         cout<<y;
                         return 0;
                    }
               }
          }
     }

     else if(x.size()!=y.size())
     {
          for(int i=0,j=0;x[i]!='\0',y[j]!='\0';i++,j++)
          {
               if(x[i]==y[j])
                    continue;

               else if(x[i]<y[j])
               {
                    cout<<x;
                    return 0;
               }

               else
               {
                    cout<<y;
                    return 0;
               }
          }

          if(x.size()>y.size())
               cout<<y;

          else
               cout<<x;
     }
     
     return 0;
}