#include<iostream>
#include<stdio.h>
#include<math.h>
#include<time.h>

int main()
{
	int n;
	int sum=0;
	scanf("%d",&n);
	if(n>25)
	{
		n=25;
	}
	for(int i=1;i<=n;i++)
	{
		int t=1;
		for(int j=1;j<=i;j++)
		{
			t=t*j%1000000;
		}
		sum=(sum+t)%1000000;
	}
	printf("%d",sum);
	printf("%.2lf\n",(double)clock()/CLOCKS_PER_SEC);
}