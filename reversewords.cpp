#include<bits/stdc++.h>

using namespace std;

int main()
{
     string s;
     getline(cin,s);

     long long j=0;
     for(long long i=0;s[i]!='\0';i++)
     {
          if(s[i+1]==' ')
          {
               for(long long k=i;k>=j;k--)
                    cout<<s[k];
               
               cout<<" ";

               j=i+2;
          }

          else if(s[i+1]=='\0')
          {
               for(long long k=i;k>=j;k--)
                    cout<<s[k];
          }
     }

     return 0;
}