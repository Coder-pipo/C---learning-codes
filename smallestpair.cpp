#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
     int t;
     cin>>t;
 
     while(t--)
     {
          int n,val=0;
          cin>>n;
 
          int arr[n];
          for(int i=0;i<n;i++)
               cin>>arr[i];
 
          int min=INT_MAX;
          for(int i=0;i<n;i++)
          {
               for(int j=i+1;j<n;j++)
               {
                    val=arr[i]+arr[j]+(j-1)-(i-1);
                    if(val<min)
                         min=val;
               }
          }
          cout<<min<<"\n";
     }
 
     return 0;
}