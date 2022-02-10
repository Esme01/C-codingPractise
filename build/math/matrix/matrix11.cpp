//北航2011上机-2
#include<iostream>
using namespace std;
int a[20][20]={0};//全部元素初始化为0
int b[20][20]={0};
int main()
{
    int h1=0,l1=0;
    int h2=0,l2=0;
    int h3,l3;
    cin>>h1>>l1;
    //如何输入二维数组？
    //1，首先输入成为一维数组，之后根据行列变成二维数组
    //2. 直接输入到二维数组中
    for (int i = 1; i <=h1; i++)
    {
        for (int j = 1; j <= l2; j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>h2>>l2;
    for (int i = 1; i <=h2; i++)
    {
        for (int j = 1; j <=l2; j++)
        {
            cin>>b[i][j];
        }
    }
    cin>>h3>>l3;
    if (h3>h1||l3>l1)
    {
        for (int i = 1; i <=h1; i++)
        {
            for (int j = 1; j <= l2; j++)
            {
                cout<<a[i][j];
            }
        }
    }

    if (h3+h2-1<=h1&&l3+l2-1<=l1)
    {
        //如何同步循环两个数组？位置不一样
        for (int i = h3,j=1; i <= h3+h2-1; i++,j++)
        {
            for (int n = l3,m=1; n <= l2+l3-1; n++,m++)
            {
                a[i][n]=b[j][m];
            }
        }
        for (int i = 1; i <=h1; i++)
        {
            for (int j = 1; j <= l2; j++)
            {
                cout<<a[i][j];
            }
        }
    }
    
    // if (/* condition */)
    // {
    //     /* code */
    // }
    
    
    
    
    return 0;
}