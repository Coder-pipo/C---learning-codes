#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n,m;
     cin>>n>>m;
     map<string,string> mp1,mp2;
     map<string,string>:: iterator itr1;
     map<string,string>:: iterator itr2;

     for(long long i=0;i<n;i++)
     {
          string s1,ip1;
          cin>>s1>>ip1;
          mp1.insert({ip1,s1});
     }

     for(long long i=0;i<m;i++)
     {
          string s2,ip2;
          cin>>s2>>ip2;
          mp2.insert({ip2,s2});
     }

     


     return 0;

}