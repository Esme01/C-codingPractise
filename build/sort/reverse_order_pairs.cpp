/*
给定一个长度为 n 的整数数列，请你计算数列中的逆序对的数量。
逆序对的定义如下：对于数列的第 i 个和第 j 个元素，
如果满足 i<j 且 a[i]>a[j]，则其为一个逆序对；否则不是。
---------------------------------------------------------
计算逆序对如何用到归并排序？
如果不用归并排序，则需要两层for循环来计算(这样会超时)
---------------------------------------------------------
用分治的思想：
--假设归并排序在排序的同时能返回整个区间逆序对的个数
*/
#include<iostream>
using namespace std;
typedef long long LL;
//最坏的情况是整个数组是逆序的，这时候会超过int的范围
const int N=100010;
int n;
int q[N],tmp[N];
/*
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
}*/
LL merge_sort(int l,int r)
{
    if(l>=r)return 0;
    int mid=l+r>>1;
    LL res=merge_sort(l,mid)+merge_sort(mid+1,r);
    //归并过程
    int k=0,i=l,j=mid+1;
    while (i<=mid && j<=r)
    {
        if(q[i]<=q[j])tmp[k++]=q[i++];
        else
        {
            tmp[k++]=q[j++];
            res+=mid-i+1;
            //和普通的归并相比，多了这一句
        }
    }
    //扫尾
    while(i<=mid)tmp[k++]=q[i++];
    while(j<=r)tmp[k++]=q[j++];
    //物归原主
    for(int i=l,j=0;i<=r;i++,j++)q[i]=tmp[j];
    return res;
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&q[i]);
    // int c=count(q,n);
    // printf("%d",c);
    cout<<merge_sort(0,n-1)<<endl;
    return 0;
}