#include<bits/stdc++.h>

using namespace std;

int main()
{
     int M,N;
     cin>>M>>N;

     char mat[M][N];
     for(int i=0;i<M;i++)
     {
          for(int j=0;j<N;j++)
               cin>>mat[i][j];
     }

     int x,y,flag=0;
     cin>>x>>y;

     if((x==1)&&(y==1))
     {
          if(mat[x-1][y]=='x')
          {
               if(mat[x][y]=='x')
               {
                    if(mat[x][y-1]=='x')
                    {
                         flag=1;
                    }
               }
          }
     }

     else if((x==1)&&(y==N))
     {
          if(mat[x-1][y-2]=='x')
          {
               if(mat[x][y-2]=='x')
               {
                    if(mat[x][y-1]=='x')
                    {
                         flag=1;
                    }
               }
          }
     }

     else if((x==M)&&(y==1))
     {
          if(mat[x-2][y-1]=='x')
          {
               if(mat[x-2][y]=='x')
               {
                    if(mat[x-1][y]=='x')
                    {
                         flag=1;
                    }
               }
          }
     }

     else if((x==M)&&(y==N))
     {
          if(mat[x-2][y-2]=='x')
          {
               if(mat[x-2][y-1]=='x')
               {
                    if(mat[x-1][y-1]=='x')
                    {
                         flag=1;
                    }
               }
          }
     }

     else
     {
          if(mat[x-2][y-2]=='x')
          {
               if(mat[x-2][y-1]=='x')
               {
                    if(mat[x-2][y]=='x')
                    {
                         if(mat[x-1][y-2]=='x')
                         {
                              if(mat[x-1][y]=='x')
                              {
                                   if(mat[x][y-2]=='x')
                                   {
                                        if(mat[x][y-1]=='x')
                                        {
                                             if(mat[x][y]=='x')
                                             {
                                                  flag=1;
                                             }
                                        }
                                   }
                              }
                         }
                    }
               }
          }
     }

     if(flag==0)
          cout<<"no\n";
     
     else
          cout<<"yes\n";

     return 0;
}