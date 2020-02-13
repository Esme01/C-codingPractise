#include<stdio.h>
#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
    int a=123,b,c;
    //用这样的初始化方式保证三个数的倍数关系
    //用一个数组来保证“每个数字恰好使用一次”
    for(;a<=329;a++)
    {
        int i[11]={0};
        int temp=0;
        //应该在每轮循环都初始化
        b=2*a;
        c=3*a;
        i[a%10]=1;i[a/10%10]=1;i[a/100]=1;
        i[b%10]=1;i[b/10%10]=1;i[b/100]=1;
        i[c%10]=1;i[c/10%10]=1;i[c/100]=1;
        for(int j=1;j<=9;j++)
        {
            temp+=i[j];
        }
        if(temp==9)
        {
            printf("%d %d %d\n",a,b,c);
        }

    }
    return 0;


}