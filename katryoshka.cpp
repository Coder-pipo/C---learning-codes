#include<bits./stdc++.h>
 
using namespace std;
 
int main()
{
     long long eye,mouth,body,sum=0;
 
     cin>>eye>>mouth>>body;
 
     if((eye>=1)&&(mouth>=1)&&(body>=1))
     {
          eye/=1;
          mouth/=1;
          body/=1;
          long long min=0;
          if(eye<=mouth)
          {
               if(eye<=body)
               {
                    min=eye;
               }
               else
               {
                    min=body;
               }
          }
          else
          {
               if(mouth<=body)
               {
                    min=mouth;
               }
               else
               {
                    min=body;
               }
          }
          eye=eye-min;
          mouth=mouth-min;
          body=body-min;
          sum+=min;
          if((eye>=2)&&(body>=1))
          {
               eye/=2;
               body/=1;
               long long min=0;
               if(eye<=body)
               {
                    min=eye;
               }
               else
               {
                    min=body;
               }
               eye=eye-min;
               body=body-min;
               sum+=min;
               if((eye>=2)&&(mouth>=1)&&(body>=1))
               {
                    eye/=2;
                    mouth/=1;
                    body/=1;
                    long long min=0;
                    if(eye<=mouth)
                    {
                         if(eye<=body)
                         {
                              min=eye;
                         }
                         else
                         {
                              min=body;
                         }
                    }
                    else
                    {
                         if(mouth<=body)
                         {
                              min=mouth;
                         }
                         else
                         {
                              min=body;
                         }
                    }
                    eye=eye-min;
                    mouth=mouth-min;
                    body=body-min;
                    sum+=min;
               }
          }
 
     }
     
     cout<<sum;
 
     return 0;
}