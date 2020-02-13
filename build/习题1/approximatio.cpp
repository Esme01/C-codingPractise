#include<stdio.h>
#include<iostream>
#include<cmath>
#include<stdlib.h>
 using namespace std;

int main()
{
    int i=1,sign=1;
    double temp=1;
    double sum=0;
    do
    {
        /* code */
        temp=sign*(1.0/i);
        sum+=temp;
        sign=-sign;
        i=i+2;
    } while (fabs(temp)>=10e-6);
    //10^（-6）不能用pow(10,-6)计算
    //abs取整数的绝对值
    //fabs取浮点数的绝对值
    printf("%.4lf\n",sum);
}