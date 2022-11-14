#include<bits/stdc++.h>

using namespace std;

int print(int n)
{
     cout<<n<<" ";
     if(n>2)
     {
          print(n-1);
     }     

     else
          cout<<1;
}

int main()
{
     int n;
     cin>>n;

     print(n);

     return 0;
}