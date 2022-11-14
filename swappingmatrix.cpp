#include<bits/stdc++.h>
#define MAX 500

using namespace std;

void swaprowcol(long long mat[MAX][MAX],int n,int x,int y)
{
     for(int i=0;i<n;i++)
     {
          long long temp=mat[x-1][i];
          mat[x-1][i]=mat[y-1][i];
          mat[y-1][i]=temp;
     }

     for(int i=0;i<n;i++)
     {
          long long temp=mat[i][x-1];
          mat[i][x-1]=mat[i][y-1];
          mat[i][y-1]=temp;
     }

     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
               cout<<mat[i][j]<<" ";
          cout<<"\n";
     }
}

int main()
{
     int n,x,y;
     cin>>n>>x>>y;

     long long mat[MAX][MAX];
     for(int i=0;i<n;i++)
     {
          for(int j=0;j<n;j++)
               cin>>mat[i][j];
     }

     swaprowcol(mat,n,x,y);
}