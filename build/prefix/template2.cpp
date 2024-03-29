/*
    796. 子矩阵的和
*/

#include<iostream>

const int N=1010;
int n,m,q;
int a[N][N],s[N][N];

int main()
{
    scanf("%d%d%d",&n,&m,&q);
    for (int i = 1; i <=n; i++)
        for (int j = 1; j <=m; j++)
            scanf("%d",&a[i][j]);//从1开始就不用考虑边界问题
    
    for (int i = 1; i <=n; i++)
        for (int j = 1; j <=m; j++)
            s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];//计算前缀和矩阵

    while (q--)
    {
        int x1,y1,x2,y2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        printf("%d\n",s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1]);
    }
    return 0;
}