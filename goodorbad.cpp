#include<bits/stdc++.h>

using namespace std;

void substring(string str)
{
     string r;
     int flag=0;
     for(long long i=0;str[i]!='\0';i++)
     {
          r=str.substr(i,3);
          if((r=="101")||(r=="010"))
          {
               flag=1;
               break;
          }
     }
     if(flag==1)
          cout<<"Good"<<"\n";

     else
          cout<<"Bad"<<"\n";
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          string str;
          cin>>str;

          substring(str);
     }

     return 0;
}