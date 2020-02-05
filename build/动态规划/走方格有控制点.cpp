#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

const int m=20;
const int n=20;
int main()
{
	int cx,cy;//马的坐标
	int x[8]={1,1,2,2,-1,-1,-2,-2};//横向位移
	int y[8]={2,-2,1,-1,2,-2,1,-1};//纵向位移
	int d[30][30];//用来标记是否是马的控制点

	for(int i=0;i<30;i++)
	{
		for(int j=0;j<30;j++)
		{
			d[i][j]=0;
		}
	}
	d[cx][cy]=1;//用1来表示该点为马控制点
	for(int i=0;i<8;i++)
	{
		int tx=cx+x[i];//计算马控制点横坐标
		int ty=cy+y[i];//计算马控制点纵坐标
		if(tx>=0&&tx<=n&&ty>=0&&ty<=n)
		{
			d[tx][ty]=1;//记录为马控制点
		}
	}
	//当d[i][j]为1时，将f[i][j]清为0
	

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