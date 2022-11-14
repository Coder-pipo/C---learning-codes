#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long id,row,col;
     cin>>id;
     
     row=id/4;

     if(row%2==0)
     {
          for(int i=0;i<4;i++)
          {
               if((row*4)+i==id)
               {
                    col=i;
                    break;
               }     
          }
     }

     else
     {
          for(int i=0;i<4;i++)
          {
               if((row*4)+(4-i-1)==id)
               {
                    col=i;
                    break;
               }     
          }
     }

     cout<<row<<" "<<col;

     return 0;
     
}