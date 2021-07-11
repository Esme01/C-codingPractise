#include<iostream>
using namespace std;
//浮点二分
int main()
{
    double n,l,r;
    cin>>n;
    // l=0,r=n;
    //这样的写法其实是错的，r应该为max(1,x)
    l=-10000,r=10000;
    while (r-l>1e-8)
    {
        double mid=(l+r)/2;
        if (mid*mid*mid>=n)r=mid;
        else l=mid;
    }
    printf("%lf\n",l);
    //退出循环的时候，r和l的差值小于1e-8
}