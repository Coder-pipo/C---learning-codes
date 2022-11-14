#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long N,L,R,sum=0,num;

     cin>>N>>L>>R;

     vector<int> v;
     for(long long i=0;i<N;i++)
     {
          cin>>num;
          v.push_back(num);
     }

     auto first=v.begin()+L-1;
     auto last=v.begin()+R;

     v.erase(first,last);

     for(int const &i:v)
          sum+=i;
     
     if(sum%2==0)
          cout<<"I Know vectors . I will help you"<<"\n";

     else
          cout<<"I need some more practice"<<"\n";

     return 0;


}