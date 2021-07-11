/*
归并排序
 （算法是稳定的,排序之后，数值相等的两个数的位置没有发生改变）
    1. 确定分界点：mid=(l+r)/2
    2. 递归排序
    3. 归并——合二为一（难点）
    （双指针算法）
    时间复杂度nlogn
    7.4+
    7.5+应用788.逆序对的数量
    7.6+ review

*/

#include<iostream>
using namespace std;
const int N = 1000010;
int n;
int q[N],tmp[N];//需要额外一个数组存数
void merge_sort(int q[],int l,int r)
{
    if(l>=r)return;//没有数or只有一个数
    //1. 确定分界点：mid=(l+r)/2
    int mid=l+r>>1;
    //2. 递归排序
    merge_sort(q,l,mid),merge_sort(q,mid+1,r);
    //3. 归并——合二为一（难点）
    int k=0,i=l,j=mid+1;//K表示已经合并了几个数;ij分别表示两个指针
    while (i<=mid && j<=r)
    {
        if(q[i]<=q[j])tmp[k++]=q[i++];
        else tmp[k++]=q[j++];
    }
    while(i<=mid)tmp[k++]=q[i++];//左半边没有循环结束
    while(j<=r)tmp[k++]=q[j++];//右半边没有循环结束

    for(i=l,j=0;i<=r;i++,j++)q[i]=tmp[j];
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&q[i]);
    merge_sort(q,0,n-1);
    for(int i=0;i<n;i++)printf("%d ",q[i]);
    return 0;
}





