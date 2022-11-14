#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long A,B,C,D,val;
     cin>>A>>B>>C>>D;

     A=A%100;
     B=B%100;
     C=C%100;
     D=D%100;

     val=A*B*C*D;

     val=val%100;
     if(val<=10)
          cout<<"0"<<val;
     else
          cout<<val;

     return 0;
}