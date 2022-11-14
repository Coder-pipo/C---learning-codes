#include<iostream>
#include<math.h>

using namespace std;

int minprime(int num)
{
    int arr[200]={0},val;

     for(int i=2;i<=num;i++)
     {
          for(int j=i*i;j<=num;j+=i){
               arr[j]=1;
          }
     }

     for(int i=2;i<=num;i++)
     {
          if(arr[i]==0){
              val=i;
              break;
          }
     }
    return val;
}

int maxprime(int num)
{
    int arr[200]={0},val;

     for(int i=2;i<=num;i++)
     {
          for(int j=i*i;j<=num;j+=i){
               arr[j]=1;
          }
     }

     for(int i=2;i<=num;i++)
     {
          if(arr[i]==0){
              val=i;
          }
     }
    return val;
}

void primesieve(int n)
{
     int count=0;

     for(int i=2;i<=sqrt(n);i++)
     {
          if(n%i==0)
          {
              count=1;
          }
         
          else
          {
              count=0;
          }
     }
    if(count==0)
        cout<<"I solved it"<<"\n";
    else
        cout<<"Nehi hua mere se"<<"\n";

}

int main()
{
    long long t,num,min,max,rem,sum=0;
    cin>>t;

    while(t>0)
    {
         cin>>num;
         min=minprime(num-1);
         max=maxprime(num+1);
         if(max>min)
         {
             while(max>0)
             {
                 rem=max%10;
                 sum+=rem;
                 max=max/10;
             }
             primesieve(sum);
         }
    }

     return 0;
}