#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long long height,width;
          cin>>height>>width;
          
          if(height==width)
               cout<<"Square"<<"\n";
          
          else
               cout<<"Rectangle"<<"\n";
     }

     return 0;
}