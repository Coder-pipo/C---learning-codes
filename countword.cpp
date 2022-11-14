#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     getline(cin,str);

     long long count=1;

     if(str=="")
          count=0;

     else
     {
          for(long long i=0;str[i]!='\0';i++)
          {
               if(str[i]==' ')
               {
                    count++;
                    if((str[i+1]=='!')||(str[i+1]=='.')||(str[i+1]=='?')||(str[i+1]==',')||(str[i+1]==' '))
                         count--;
               }     
          }
     }
     

     cout<<count;

     return 0;
}