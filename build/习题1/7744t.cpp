#include<iostream>
#include<stdio.h>
#include<math.h>

int main()
{
    /*解法一*/
    //列举aabb形式的数，判断是否为完全平方数
	// int a,b,n;
	// double c;
	// //要用double来存储n的开方，因为n不一定是完全平方数
	// for(a=1;a<=9;a++)
	// {
	// 	for(b=0;b<=9;b++)
	// 	{
	// 		n=1100*a+11*b;
	// 		c=sqrt(n);
	// 		if(floor(c+0.5)==c)//如何判断是否是整数？
	// 			printf("%d\n",n);
	// 	}
	// }

    
    /*解法二*/
    //列举平方数，判断是否是AABB的形式
    int x,n,hi,lo;
    for(x=1;;x++)//也可以从32才开始枚举，32*32=1024
    {
        n=x*x;
        if(n<1000)continue;//其实这句话多余
        if(n>9999)break;
        hi=n/100;
        lo=n%100;
        if(hi%10==hi/10&&lo%10==lo/10){
            printf("%d\n",n);
        }
    }
	return 0;
}