#include<bits/stdc++.h>

using namespace std;

int main()
{
     int A,B;
     cin>>A>>B;

     string S;
     cin>>S;

     if(S[A]=='-')
     {
          int count1=0;
          for(int i=0;i<A;i++)
          {
               if(S[i]>='0'&&S[i]<='9')
                    continue;
               
               else
               {
                    count1=1;
                    break;
               }
          }

          if(count1==0)
          {
               int count2=0;
               for(int j=A+1;j<A+B;j++)
               {
                    if(S[j]>='0'&&S[j]<='9')
                         continue;
                    
                    else
                    {
                         count2=1;
                         break;
                    }
               }

               if(count2==0)
               {
                    cout<<"Yes";
                    return 0;
               }

               else
               {
                    cout<<"No";
                    return 0;
               }
          }

          else
          {
               cout<<"No";
               return 0;
          }
     }

     else
          cout<<"No";
     return 0;
}