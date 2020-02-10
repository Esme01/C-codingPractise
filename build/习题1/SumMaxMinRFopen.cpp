#define LOCAL
#include<stdio.h>
#define INF 1000000000
/**有一种方法可以在本机测试时用文件重定向，
 * 但一旦提交到比赛，就自动“删除”重定向语句
**/
int main()
{
	#ifdef LOCAL
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
	#endif
	//只有定义了符号LOCAL，才编译两条freopen语句
	
	int x,n=0,min=INF,max=-INF,s=0;
	while (scanf("%d",&x)==1)
	{
		s+=x;
		if(x<min)min=x;
		if(x>max)max=x;
		/**
		 * printf("x=%d,min=%d,max=%d\n",x,min,max);
		 * 
		*/
		n++;
	}
	printf("%d %d %.3lf\n",min,max,(double)s/n);
	return 0;
}