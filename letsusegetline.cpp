#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     getline(cin,str);

     for(long long i=0;str[i]!='\0';i++)
     {
          if(str[i]!='\\')
               cout<<str[i];

          else
               break;
     }

     return 0;
}