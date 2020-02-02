#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
	for(double i;;i++)
	{
		if(i+1<i)
		{
			printf("%.15lf",i);
			break;
		}
	}

	for(double i;;i--)
	{
		if(i-1>i)
		{
			printf("%.15lf",i);
			break;
		}
	}
	return 0;
}