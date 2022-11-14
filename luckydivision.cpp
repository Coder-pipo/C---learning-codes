#include<bits/stdc++.h>

using namespace std;

int main()
{
     int num,temp,flag=0;
     cin>>num;

     temp=num;
     while(num>0)
     {
          int rem=num%10;
          if((rem!=4)&&(rem!=7))
          {
               flag=1;
               break;
          }
          num=num/10;
     }

     if(flag==0)
          cout<<"YES";

     else
     {
          if((temp%4==0)||(temp%7==0))
               cout<<"YES";

          else
               cout<<"NO";
     }

     return 0;
}