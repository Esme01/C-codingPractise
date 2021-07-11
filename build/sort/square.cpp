/*
    二分法计算开方
    模板2--浮点二分法
    7.8+
*/
#include<iostream>
using namespace std;
int main()
{
    double x;
    cin>>x;
    double l=0,r=x;
    
    while (r-l>1e-8)//写-8 结果保留6位小数
    {
        double mid=(l+r)/2;
        if(mid*mid>=x)r=mid;
        else l=mid;
    }
    
   //第二种常用写法，直接迭代100次
   /*
    for(int i=0;i<100;i++)
    {
        double mid=(l+r)/2;
        if(mid*mid>=x)r=mid;
        else l=mid;
    }
    */
    printf("%lf\n",l);
    return 0;
}
