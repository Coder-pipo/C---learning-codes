#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          string str;
          cin>>str;

          if(str.size()>10)
               cout<<str[0]<<str.size()-2<<str[str.size()-1]<<"\n";

          else
               cout<<str<<"\n";
     }

     return 0;
}