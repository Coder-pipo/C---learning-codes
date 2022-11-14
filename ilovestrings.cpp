#include<bits/stdc++.h>

using namespace std;

int main()
{
     int n;
     cin>>n;

     while(n--)
     {
          string s,t,r="";
          cin>>s>>t;

          int i=0,j=0;

          if(s.size()==t.size())
          {
               while((s[i]!='\0')&&(t[j]!='\0'))
               {
                    r+=s[i];
                    i++;
                    r+=t[j];
                    j++;
               }
          }

          else
          {
               if(s.size()>t.size())
               {
                    while(t[j]!='\0')
                    {
                         r+=s[i];
                         i++;
                         r+=t[j];
                         j++;
                    }

                    while(s[i]!='\0')
                    {
                         r+=s[i];
                         i++;
                    }
               }

               else
               {
                    while(s[i]!='\0')
                    {
                         r+=s[i];
                         i++;
                         r+=t[j];
                         j++;
                    }

                    while(t[j]!='\0')
                    {
                         r+=t[j];
                         j++;
                    }
               }
          }

          cout<<r<<"\n";
     }

     return 0;
}