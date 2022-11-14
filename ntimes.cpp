#include<bits/stdc++.h>

using namespace std;

void print(long long n,char c)
{
     for(long long i=0;i<n;i++)
          cout<<c<<" ";

     cout<<"\n";
}

int main()
{
     long long t;
     cin>>t;

     while(t--)
     {
          long long n;
          char c;
          cin>>n>>c;

          print(n,c);
     }

     return 0;
}