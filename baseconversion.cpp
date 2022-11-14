#include<bits/stdc++.h>

using namespace std;

void baseconversion(long long num)
{
     int val;
     if(num>0)
     {
          baseconversion(num/2);
          val=num%2;
          cout<<val;
     }
}

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          long long num;
          cin>>num;

          baseconversion(num);

          cout<<"\n";
     }

     return 0;
}