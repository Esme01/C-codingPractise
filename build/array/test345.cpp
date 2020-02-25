#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 10000000
using namespace std;

char s[MAXN];//声明长度不小于10^7应该放在main函数外
int main()
{
   fgets(s,sizeof(s),stdin);
   int tot=0;
   for (int i = 0; i < strlen(s); i++)
   {
      if (s[i]=='1')
      //s[i]==1是错误的
      {
         tot++;
      }
   }
   printf("There are %d character(s) '1' in the string.\n",tot);
   return 0; 
}
