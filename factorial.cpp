#include<bits/stdc++.h>

using namespace std;

long long factorial(int n)
{
     long long fact;
     if(n==0)
          return 1;

     else
     {
          fact=n*factorial(n-1);
          return fact;
     }
}

int main()
{
     int n;
     cin>>n;

     cout<<factorial(n);

     return 0;
}