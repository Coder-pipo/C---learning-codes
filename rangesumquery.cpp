#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long n,q;
     cin>>n>>q;

     long long arr[n],pref[n];
     for(long long i=1;i<=n;i++)
     {
          cin>>arr[i];
          pref[i]=pref[i-1]+arr[i];
     }

     while(q--)
     {
          long long l,r;
          cin>>l>>r;
          cout<<pref[r]-pref[l-1]<<"\n";
     }

     return 0;
     
}