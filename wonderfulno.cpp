#include<bits/stdc++.h>

using namespace std;

void check_palindrome(long long num)
{
     long long temp=num,rev;

     while(temp>0)
     {
          long long rem=temp%10;
          rev=(rev*10)+rem;
          temp=temp/10;
     }

     if(rev==num)
          cout<<"YES";

     else
          cout<<"NO";
}

long long binary(long long num)
{
     long long rem,bin=0;
     while(num>0)
     {
          
     }

     long long val=0;
     rem=0;
     while(bin>0)
     {
          rem=bin%10;
          val=(val*10)+rem;
          bin=bin/10;
     }

     cout<<val;
     check_palindrome(val);
}

int main()
{
     long long num;
     cin>>num;

     if(num%2!=0)
     {
          binary(num);
     }

     return 0;
}