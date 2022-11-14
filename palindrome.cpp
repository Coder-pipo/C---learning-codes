#include<bits./stdc++.h>

using namespace std;

int main()
{
     long long num,rem,rev=0;

     cin>>num;

     long long temp;

     temp=num;

     while(num>0)
     {
          rem=num%10;
          rev=(rev*10)+rem;
          num=num/10;
     }

     if(temp==rev)
     {
          cout<<rev<<"\n";
          cout<<"YES"<<"\n";
     }

     else
     {
          cout<<rev<<"\n";
          cout<<"NO"<<"\n";
     }

}