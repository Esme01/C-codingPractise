#include<stdio.h>
#include<iostream>
#include<cmath>
#include<stdlib.h>
 using namespace std;

int main()
{
     int n,m;
     cin>>n>>m;
     double sum=0;
     for(int i=n;i<=m;i++)
     {
         sum+=1.0/i/i;
         //此处使用sum+=1.0/(i*i)会溢出
     }
     printf("%.5lf\n",sum);
}