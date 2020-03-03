//网上代码借鉴：
#include<stdio.h>
#include<iostream>

using namespace std;
int A[3000]={1};         
//初始化为1 而不是0 
//A[0]表示个位
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=0;j<3000;j++) 
 //因为不知道这个大数会有多少位，因此可以把这3000位都遍历一遍
        {
            int m=A[j]*i+s;   //同样是多项式乘法，用m作辅助
            A[j]=m%10;    
            s=m/10;           //求需要进位的数 
        }
    }

    i=2999;     //为逆向输出做准备
    while(!A[i--]);     //从第一个非零的项开始输出
    cout<<A[i+100]<<endl;
    for(j=i+1;j>=0;j--)
    {
        printf("%d",A[j]);
    }
    printf("\n");
    return 0;
}
