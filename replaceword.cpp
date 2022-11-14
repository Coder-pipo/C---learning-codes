#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str;
     cin>>str;

     size_t index=0;
     while(true)
     {
          index=str.find("EGYPT",index);

          if(index==string::npos)
               break;

          str.replace(index,5," ");
          index=0;
     }

     cout<<str;

     return 0;
}