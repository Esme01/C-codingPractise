#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

const int m=20;
const int n=20;
int main()
{
	//不考虑控制点
	//f[n][m]即为从[0][0]到（n,m）的路径数目
	int f[100][100];
	f[0][0]=1;//在原点只有一种情况
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i!=0)
			{
				f[i][j]=f[i][j]+f[i-1][j];//更新行值
			}
			if(j!=0)
			{
				f[i][j]=f[i][j]+f[i][j-1];//更新列值
			}
		}
	}
	printf("%d\n",f[n][m]);
	return 0;
}