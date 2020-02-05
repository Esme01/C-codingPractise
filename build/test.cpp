#include<iostream>
#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,n;
	double c;
	//要用double来存储n的开方，因为n不一定是完全平方数
	for(a=1;a<=9;a++)
	{
		for(b=0;b<=9;b++)
		{
			n=1100*a+11*b;
			c=sqrt(n);
			if(floor(c+0.5)==c)//如何判断是否是整数？
				printf("%d\n",n);
		}
	}
	return 0;
}