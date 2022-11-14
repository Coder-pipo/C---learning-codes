#include<bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;

     while(t--)
     {
          int n;
          cin>>n;

          int arr[n],even=0,odd=0;
          for(int i=0;i<n;i++)
          {
               cin>>arr[i];
               if(arr[i]%2==0)
                    even++;

               else
                    odd++;
          }     

          if(n%2==0)
          {
               if(even==odd)
               cout<<0<<"\n";

               else if(even<odd)
                    cout<<odd-(n/2)<<"\n";

               else
                    cout<<even-(n/2)<<"\n";
          }

          else
               cout<<-1<<"\n";
          
     }

     return 0;
}