#include<bits/stdc++.h>

using namespace std;

void swap(long long n1,long long n2)
{
     long long temp;
     temp=n1;
     n1=n2;
     n2=temp;

     cout<<n1<<" "<<n2;
}

int main()
{
     long long num1,num2;
     cin>>num1>>num2;

     swap(num1,num2);

     return 0;
}