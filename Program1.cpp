#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long years=0,months=0,days;
     cin>>days;

     if(days>=365)
     {
          years=days/365;
          days=days%365;
     }
     if(days>=30)
     {
          months=days/30;
          days=days%30;
     }
          
     cout<<"years: "<<years<<"\nmonths: "<<months<<"\ndays: "<<days;
}