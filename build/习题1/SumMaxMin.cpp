#include<iostream>
#include<stdio.h>
#include<math.h>
#include<time.h>
typedef long long ll;
// const N 2*e;  //怎么写来着？
// ll a[N];
/**
 * 解决max,min的方法：
 * ①定义一个很大的常数，如INF=1000000000，max=INF,min=-INF
 * ②先读取第一个整数x，然后令max=min=x
 * 这样可以避免人为“假象无穷大”值，程序更加优美
 * 而INF这样的常数有时还会引起其他问题，如“无穷大不够大”，或者“运算溢出”
**/

int main()
{
	//如何输入这些数？用数组吗？那会输入几个数？
	//关键在于：整数的个数是不确定的
	// int x,n=1,min,max,s=0;
	// //可以用
	// scanf("%d",&x);
	// min=max=s=x;
	// printf("%d %d",min,max);
	// while(scanf("%d",&x)==1)
	// //scanf有返回值
	// {
	// 	s+=x;
	// 	if(x<min)min=x;
	// 	if(x>max)max=x;
	// 	n++;
	// }
	// printf("%d %d %.3lf\n",min,max,(double)s/n);
	// return 0;

/***
 * 如何用文件输入输出数据？
 * 并且比较输出数据是否正确？
 * 
***/


}