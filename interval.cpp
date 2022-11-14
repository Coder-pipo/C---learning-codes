#include<iostream>

using namespace std;

int main()
{
     long long l1,l2,r1,r2,val1,val2;

     cin>>l1>>r1>>l2>>r2;
     
     val1=max(l1,l2);

     val2=min(r1,r2);

     if(val2-val1>=0)
          cout<<val1<<" "<<val2;

     else
          cout<<"-1";

     return 0;
}