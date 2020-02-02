#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%.3lf",(a+b+c)/3.0);
	//如果直接输出printf("%.3lf",(a+b+c)/3),结果是0.000
	return 0;
}