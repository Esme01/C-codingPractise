#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdlib.h>
#define MAXN 50+10
using namespace std;

char s[MAXN];
int main()
{
   //0---48
   //1---49
   /**
    * 题目描述：只用getchar函数读入一个整数。
    * 假设它占据单独的一行，读到行末为止，包括换行符(也就是读到换行符为止)
    * 输入保证读入的整数可以保存在int中。
    * **/
   int i=0;
   char t;
   //错误写法：while (t=getchar()!='\n')
   while ((t=getchar())!='\n')
   {
      s[i++]=t;
   }
   s[i]=0;
   //getchar一次只能输入一个字符，如何用它读入多个字符？
   int n=atoi(s);
   //atoi把字符串变成数字
   printf("%d\n",n);     
   
   
   return 0; 
}
