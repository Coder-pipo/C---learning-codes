#include<iostream>

using namespace std;

void prime(int n)
{
     long long arr[100]={0},max=0,val1,val2,prime,sum=0;
     for(int i=2;i<=n;i++)
     {
          for(int j=i*i;j<=n;j+=i)
          {
               arr[j]=1;
          }
     }

     for(int i=2;i<=n;i++)
     {
          if(arr[i]==0){
               val1=i;
          }
     }

     while(max!=1)
     {
          n=n+1;
          for(int i=2;i<=n;i++)
          {
               for(int j=i*i;j<=n;j+=i)
               {
                    arr[j]=1;
                    max=1;
               }
          }
          for(int i=2;i<=n;i++)
          {
               if(arr[i]==0){
                    val2=i;
               }
          }
     }

     if(val1>val2)
     {
          prime=val1;
          int temp=prime;
          while(prime>0)
          {
               int rem=prime%10;
               sum+=rem;
               prime=prime/10;
          }
          n=sum;
          for(int i=2;i<=n;i++)
          {
               for(int j=i*i;j<=n;j+=i)
               {
                    arr[j]=1;
                    max=1;
               }
          }
          for(int i=2;i<=n;i++)
          {
               if(arr[i]==0){
                    cout<<"I solved it";
               }
               else
                    cout<<"Nehin hua merese";
          }

     }


     
}

int main()
{
     long long t,num;
     cin>>t;

     while(t>0)
     {
          cin>>num;
          prime(num);
     }

     return 0;
}