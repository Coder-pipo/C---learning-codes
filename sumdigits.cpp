#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n,sum=0;
     cin>>n;

     string str;
     cin>>str;

     for(long long i=0;i<n;i++)
     {
          int num;
          num=str[i]-'0';
          sum+=num;
     }

     cout<<sum;

     return 0;
}