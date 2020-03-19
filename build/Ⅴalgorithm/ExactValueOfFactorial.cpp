#include<iostream>
#include<stdio.h>
#include<string.h>
// #define MAXN 3000
const int MAXN=3000;
int f[MAXN];

using namespace std;
int main()
{
    int a,i,b,n,temp=0,s=MAXN-1;//s不能=maxn
    memset(f,0,sizeof(f));
    cin>>n;
    f[0]=1;
    for (i = 2; i <= n; i++)
    {
        for (int j = 0; j < 3000; j++)
        {
            /**
             * 错误写法：
             *  f[j]=(temp+f[j]*i)%10;
             * temp=(temp+f[j]*i)/10;
             * 这样temp得到的数不是原来数的进位
            */
           /**
            * ⭐用乘数乘以数组上的每个数即可
            * 不用考虑多位数成多位数的情况
            * 想一想是为什么。
           */
            int s=f[j]*i+temp;
            f[j]=s%10;
            temp=s/10;
        }
        temp=0;//⭐temp每轮计算都要从0开始
    }
    while (f[s]==0)s--;
    for ( ; s>=0 ; s--)
    {
        cout<<f[s];
    }
    cout<<endl;
    return 0;
}