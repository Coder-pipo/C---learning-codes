#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     cin>>str;

     sort(str.begin(),str.end());

     long long count;
     for(long long i=0;str[i]!='\0';i++)
     {
          count=1;
          while(str[i]==str[i+1])
          {
               count++;
               i++;
          }

          cout<<str[i]<<" : "<<count<<"\n";
     }

     return 0;
}