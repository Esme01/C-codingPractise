#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 100+10
using namespace std;

char s[MAXN];//声明长度不小于10^7应该放在main函数外
int main()
{
   fgets(s,sizeof(s),stdin);
   int flag=1,count=0,num=0;
   for (int i = 0; i < sizeof(s); i++)
   {
      if (isalpha(s[i]))
      {
         count++;
         if (flag==1)num++;
         flag=0;
      }
      else flag=1;
   }
   cout<<num<<" "<<count/num<<endl;
   return 0;
}
