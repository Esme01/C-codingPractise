#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
	//法1
	// int n;
	// scanf("%d",&n);
	// printf("%d",(1+n)*n/2);

	int n,sum=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)//要特别注意i的初始值，和判断循环终止的条件
	{
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}