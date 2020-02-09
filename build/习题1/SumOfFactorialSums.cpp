#include<iostream>
#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
	// int n,t;
	// long long s=0;
	// scanf("%d",&n);
	// //要输出S的末6位，但是，还是要算出这个数
	// for(int i=1;i<=n;i++)
	// {
	// 	t=1;
	// 	for(int j=1;j<=i;j++)
	// 	{
	// 		t*=j;
	// 	}
	// 	s+=t;
	// }
	// printf("%d",s%1000000);
	//这样写可以输出样例，但当输入的n很大的时候，结果就不正确了,把s变成LONG LONG 也不管用

	const int MOD=1000000;
	//定义常量，改善了程序的可读性，也方便修改
	int i,j,n,s=0;
	scanf("%d",&n);
	if(n>25)
		n=25;
	for(i=1;i<=n;i++)
	{
		int factorial=1;
		for(j=1;j<=i;j++)
		{
			factorial=(factorial*j%MOD);
		}
		s=(s+factorial)%MOD;
	}
	printf("%d\n",s);
	printf("Time used=%.2lf\n",(double)clock()/CLOCKS_PER_SEC);
	//除以CLOCKS_PER_SEC之后得到的值以“秒”为单位
	return 0;

}