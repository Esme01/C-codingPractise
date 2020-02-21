#include<stdio.h>
#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<string.h>
using namespace std;
// const int MAXN=100;
// int a[MAXN]={0};
//1是开，0是关
#define MAXN 1000+10
int a[MAXN];
int main()
{
    // int n,k;
    // cin>>n>>k;
    // for(int i=1;i<=k;i++)
    // {
    //     for(int j=1;j*i<=n;j++)
    //     {
    //         if(a[j*i]==1)a[j*i]=0;
    //         else
    //         {
    //             a[j*i]=1;
    //         }
    //     }
    // }
    // for(int i=1;i<=n;i++)
    // {
    //     if(a[i]==1)
    //     {
    //         cout<<i<<" ";
    //     }
    // }
    // cout<<endl;

    int i,j,n,k,first=1;
    memset(a,0,sizeof(a));
    scanf("%d%d",&n,&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=n;j++)
        {
            if (j%i==0)
            {
                /* code */
                a[j]=!a[j];
            }
            
        }
    }
    for(i=1;i<=n;i++)
    {
        if (a[i])
        {
            /* code */
            if (first)
            {
                /* code */
                first=0;
            }
            else
            {
                printf(" ");
            }
            //第一个变量前不应该有空格，所以设置first变量
            printf("%d",i);
        }

    }
    printf("\n");
    return 0;
}