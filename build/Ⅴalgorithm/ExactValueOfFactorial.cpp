#include<iostream>
#include<stdio.h>
#define MAXN 3000
int f[MAXN]={0};

using namespace std;
int main()
{
    int a,i,b,n,temp=0,s=MAXN;
    cin>>n;
    f[0]=1;
    for (i = 2; i <= n; i++)
    {
        for (int j = 0; j < 3000; j++)
        {
            f[j]=(temp+f[j]*i)%10;
            temp=(temp+f[j]*i)/10;
        }
        temp=0;//temp每轮计算都要从0开始
    }
    while (f[s]==0)s++;
    for ( ; s>=0 ; s--)
    {
        cout<<f[s];
    }
    cout<<endl;
    return 0;
}