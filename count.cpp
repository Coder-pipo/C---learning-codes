#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     cin>>str;

     long long count=0;
     for(long long i=0;str[i]!='\0';i++)
     {
          int num=str[i]-'0';
          count+=num;
     }

     cout<<count;

     return 0;
}