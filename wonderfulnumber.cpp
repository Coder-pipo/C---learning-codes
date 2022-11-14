#include<bits/stdc++.h>

using namespace std;

void binarypal(long long n)
{
     long long bin=0,count=0;
     while(n>0)
     {
          long long rem=n%2;
          bin=bin*10+rem;
          count++;
          n=n/2;
     }

     for(long long i=0;i<count)
}

void checkodd(long long n)
{
     if(n%2!=0)
          binarypal(n);

     else
          cout<<"NO";

}

int main()
{
     long long n;
     cin>>n;

     checkodd(n);

     return 0;
}