#include<iostream>
#include<iomanip>//控制double的精度
using namespace std;
const double PI=3.1415926;

double sumArea(double* radius,int n)
{
    //输出总面积，保留小数点后5位
    double sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=PI*radius[i]*radius[i];
    }
    return sum;
    
}

int main()
{
    int n;
    cin>>n;
    //动态分配存储空间为n的数组radius
    double* radius=new double[n];
    for (int i = 0; i < n; i++)
    {
        cin>>radius[i];
    }
    // cout<<sumArea(radius,n)<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(5)<<sumArea(radius,n)<<endl;
    delete(radius);//释放指针变量的内存空间
    return 0;
}