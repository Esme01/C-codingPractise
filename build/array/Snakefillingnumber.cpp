#include<stdio.h>
#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<string.h>
#define MAXN 10
int a[MAXN][MAXN];
//感觉是用到二维数组
using namespace std;

int main(){
    memset(a,0,sizeof(a));
    int n,x,y,total=0;
    scanf("%d",&n);
    total=a[x=0][y=n-1]=1;
    while (total<n*n)
    //while (a[x+1][y]==0)
    {
        while (x+1<n&&!a[x+1][y])a[++x][y]=++total;
        while (y-1>=0&&!a[x][y-1])a[x][--y]=++total;
        while (x-1>=0&&!a[x-1][y])a[--x][y]=++total;
        while (y+1<n&&!a[x][y+1])a[x][++y]=++total;
    }
    for (x = 0; x < n; x++)
    {
        /* code */
        for (y = 0; y < n; y++)
        {
            /* code */
            printf("%3d",a[x][y]);
            //
            //printf("%03d",a[x][y]);
            //指定格式的输出，就可以让矩阵对齐
            
         }
         printf("\n");
    }
    return 0;
    
}