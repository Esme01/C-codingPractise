/*
给定一个长度为 n 的整数数列，请你计算数列中的逆序对的数量。
逆序对的定义如下：对于数列的第 i 个和第 j 个元素，
如果满足 i<j 且 a[i]>a[j]，则其为一个逆序对；否则不是。
---------------------------------------------------------
计算逆序对如何用到归并排序？
如果不用归并排序，则需要两层for循环来计算

*/
#include<iostream>
using namespace std;
const int N=100001;
int n;
int q[N];

int count(int q[],int n)
{
    int c=0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(q[i]<q[j])c++;
        }
    }
    return c;
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&q[i]);
    int c=count(q,n);
    printf("%d",c);
    return 0;
}