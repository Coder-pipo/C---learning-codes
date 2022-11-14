#include<bits/stdc++.h>

using namespace std;

int main()
{
     string str,strrev;
     cin>>str;
     
     strrev=str;

     reverse(str.begin(),str.end());

     if(str==strrev)
          cout<<"YES";

     else
          cout<<"NO";

     return 0;
}