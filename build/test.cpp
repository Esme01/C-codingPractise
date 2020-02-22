#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

#define MAXN 10
//define不用加分号
int a[MAXN][MAXN];

int main()
{
    memset(a,0,sizeof(a));
    int n,i,j,k=1;
    cin>>n;
    // for(k=1;k<=n*n;k++)
    // {
        
    // }
    // j=n-1;
    // i=0;

    k=a[i=0][j=n-1]=1;
    while (k<n*n)//因为之后k会++所以不是<=
    {
        while (i+1<n&&!a[i+1][j])a[++i][j]=++k;
        while (j-1>=0&&!a[i][j-1])a[i][--j]=++k;
        while (i-1>=0&&!a[i-1][j])a[--i][j]=++k;
        while (j+1>n&&!a[i][j+1])a[i][++j]=++k;
    }
    for(int c=0;c<n;c++)
    {
        for(int b=0;b<n;b++)
        {
            printf("%3d",a[c][b]);
        }
        printf("\n");//是\不是/
    }
    return 0;
}
