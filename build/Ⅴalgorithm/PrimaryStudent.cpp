#include<iostream>
#include<stdio.h>

using namespace std;
/**
 * 思路正确但不符合题目要求
*/
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     if(a==b==0)return 0;
//     int temp=0,s=0;
//     while (a!=0&&b!=0)
//     {
//         temp=(temp+a%10+b%10)/10;
//         if (temp!=0)s++;
//         a/=10;
//         b/=10;
//     }
//     cout<<s<<endl;
//     return 0;
// }

int main()
{
    int a,b;
    while (scanf("%d%d",&a,&b)==2)//可以一直输入
    {
        if (!a&&!b)return 0;//如果都等于0则退出程序
        int c=0,ans=0;//不需要知道结果，只求进位，所以设定为局部变量
        for (int i = 9; i >= 0; i--)//因为可以保存9为整数，所以进行九次循环
        {
            c=(a%10+b%10+c)>9?1:0;
            ans+=c;
            a/=10;b/=10;
        }
        printf("%d\n",ans);
    }
    return 0;
}
