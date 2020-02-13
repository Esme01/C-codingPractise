#include<stdio.h>
#include<iostream>
#include<math.h>
#include<cstdio>
 using namespace std;
 int main()
 {
     //法一：无公式
     int n;
     cin>>n;
     double sum=0;
     for(double i=1;i<=n;i++)
     {
         sum+=1.0/i;
         printf("%.3lf\n",1/i);
         //如何求结果为小数的商？
         //除法既可以整除，也可以用于浮点数
     }
     printf("%.3lf\n",sum);

 }