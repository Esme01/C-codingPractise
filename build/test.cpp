#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 100+10
using namespace std;

int s[MAXN][MAXN]={0};//不为0的地方就不用填补
int main()
{
   int n;
   cin>>n;
   int i=0,j=n-1,num=1;
   s[i][j]=1;
   while (s[i+1][j]==0)
   {
      //要预判下一个是否是0，再往下填
      while (s[i+1][j]==0&&i+1<n)s[++i][j]=++num;
      while (s[i][j-1]==0&&j-1>=0)s[i][--j]=++num;
      while (s[i-1][j]==0&&i-1>=0)s[--i][j]=++num;
      while (s[i][j+1]==0&&j+1<n)s[i][++j]=++num;
   }
   for ( i = 0; i < n; i++)
   {
      for ( j = 0; j < n; j++)
      {
            cout<<s[i][j]<<" ";
      }
      printf("\n");
   }
   return 0;
}
