#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     string str;
     cin>>str;

     int score=0;
     for(int i=0;i<n;i++)
     {
          if(str[i]=='V')
               score+=5;

          else if(str[i]=='W')
               score+=2;

          else if(str[i]=='X')
          {
               if((str[i+1]=='V')||(str[i+1]=='W')||(str[i+1]=='X')||(str[i+1]=='Y')||(str[i+1]=='Z'))
               {
                    for(int j=i+1;j<n;j++)
                         str[j]=str[j+1];
                    n--;
               }
          }

          else if(str[i]=='Y')
          {
               if((str[i+1]=='V')||(str[i+1]=='W')||(str[i+1]=='X')||(str[i+1]=='Y')||(str[i+1]=='Z'))
               {
                    char temp=str[i+1];
                    for(int j=i+2;j<n;j++)
                         str[j]=str[j+1];
                    
                    str[n-1]=temp;
               }
          }

          else if(str[i]=='Z')
          {
               if(str[i+1]=='V')
               {
                    score/=5;
                    for(int j=i+2;j<n;j++)
                         str[j]=str[j+1];
                    n--;
               }     

               else if(str[i+1]=='W')
               {
                    score/=2;
                    for(int j=i+2;j<n;j++)
                         str[j]=str[j+1];
                    n--;
               } 
          }
     }

     cout<<score;

     return 0;
}