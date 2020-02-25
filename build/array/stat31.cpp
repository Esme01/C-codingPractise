#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 100
using namespace std;

int s[MAXN];//声明长度不小于10^7应该放在main函数外
int main()
{
   /**
    * 任务一：
    * 分数均为不超过100的非负整数
    * */
   //难点：如何统计哪个分数出现的次数最多？
   //先全部输入，再一个个计算
   //先排序后统计
   int t,i=0,n,m,temp;
   while (scanf("%d",&t)==1)s[i++]=t;
   for ( m = 0; m < i-1; m++)
   {
       for ( n = 0; n < i-m-1; n++)
       {
           if(s[n]>s[n+1])
           {
               temp=s[n];
               s[n]=s[n+1];
               s[n+1]=temp;
           }
       }
   }

    for (int j = 0; j < i; j++)
   {
       cout<<s[j]<<" ";
   }
   return 0;
}
