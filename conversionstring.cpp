#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     cin>>str;

     for(long long i=0;str[i]!='\0';i++)
     {
          if(str[i]==',')
               str[i]=' ';

          else if((str[i]>=97)&&(str[i]<=122))
               str[i]=str[i]-32;

          else if((str[i]>=65)&&(str[i]<=90))
               str[i]=str[i]+32;
     }

     cout<<str;
     return 0;
}