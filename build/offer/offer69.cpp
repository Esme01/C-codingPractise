/*

题目：假设一个单调递增的数组里的每个元素都是整数并且是唯一的。
请编程实现一个函数找出数组中任意一个数值等于其下标的元素。
例如，在数组 [−3,−1,1,3,5] 中，数字 3 和它的下标相等。

*/

#include<iostream>
using namespace std;
const int N=100010;
int q[N];

int getNumberSameAsIndex(int* nums,int numsSize)
{
    //如果一个数组种满足条件的数字不止 1 个，如何返回结果？
    //如何用二分法实现查找？
    int l=0,r=numsSize-1;
    while (l<r)
    {
        int mid=l+r>>1;
        if(nums[mid]<=mid)l=mid;
        else r=mid-1;
    }
    //退出while循环时，l=r
    if (nums[l]==l)return l;
    else return -1;
}

int main()
{
    //如何在不知道数组元素个数的情况下，输入一个数组？
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",q[i]);
    int res=getNumberSameAsIndex(q,n);
    printf("%d",res);
    return 0;
}