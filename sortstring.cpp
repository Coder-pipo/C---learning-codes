#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n;
     cin>>n;

     char c;
     string str="";

     for(long long i=0;i<n;i++)
     {
          cin>>c;
          str=str+c;
     }

     for(long long i=0;i<n;i++)
     {
          for(long long j=i+1;j<n;j++)
          {
               if(str[i]>str[j])
               {
                    char temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;
               }
          }
     }

     cout<<str;

     return 0;
}