#include<iostream>
#include<algorithm>
using namespace std;
//用泰勒级数计算三角函数
double arctan(double x)
{
    double sqr=x*x;
    double e=x;
    double r=0;
    int i=1;
    while (e/i>1e-15)
    {
        double f=e/i;
        r=(i%4==1)?r+f:r-f;//判断语句处理正负号
        e=e*sqr;//3,5,7,9,11...
        i+=2;
    }
    return r;
}


int main()
{
    double a=16.0*arctan(1/5.0);
    double b=4.0*arctan(1/239.0);
    cout<<"PI="<<a-b<<endl;
    return 0;
}