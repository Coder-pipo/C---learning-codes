#include<bits./stdc++.h>
#include<map>

using namespace std;

int main()
{
     map<char,int> mp;

     string s;

     cin>>s;

     long long k;
     cin>>k;

     for(auto i=0;i<s.size();++i)
     {
          mp[s[i]]++;
     }

     if(k>s.size())
     {
          cout<<"impossible"<<endl;
          return 0;
     }
     if(k<=mp.size())
     {
          cout<<0<<endl;
          return 0;
     }
     cout<<k-mp.size()<<endl;
     return 0;
     
}