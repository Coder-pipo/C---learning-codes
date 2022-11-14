#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n,k,a,ans1;
     double ans;
     cin>>n>>k>>a;

     ans=(double)(n*k)/a;
     ans1=(long long)ans;
     
     if(ans-ans1!=0)
          cout<<"double";

     else
     {
          if((ans>=-2147483648)&&(ans<=2147483647))
               cout<<"int";

          else
               cout<<"long long";
     }

     return 0;
}