#include<bits/stdc++.h>

using namespace std;

int vowelcount(string str,int n,int count)
{
     if(n>0)
     {
          if((str[n]=='a')||(str[n]=='e')||(str[n]=='i')||(str[n]=='o')||(str[n]=='u')||(str[n]=='A')||(str[n]=='E')||(str[n]=='I')||(str[n]=='O')||(str[n]=='U'))
               count++;
          vowelcount(str,n-1,count);
     }

     return count;
}

int main()
{
     string str;
     getline(cin,str);

     int count=0,n=str.length();
     cout<<vowelcount(str,n,count);

     return 0;
}