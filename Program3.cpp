#include<bits/stdc++.h>

using namespace std;

int main()
{
     int num,sum=0;
     cin>>num;

     int temp=num;
     while(num>0)
     {
          int rem=num%10;
          sum+=rem*rem*rem;
          num=num/10;
     }

     if(temp==sum)
          cout<<"\nArmstrong Number";

     else
          cout<<"\nNon-Armstrong number";

     return 0;
}