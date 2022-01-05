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
    //如果一个数组中满足条件的数字不止 1 个，如何返回结果？
    //如何用二分法实现查找？
    int l=0,r=numsSize-1;
    while (l<r)
    {
        int mid=l+r+1>>1;
        if(nums[mid]<=mid)l=mid;
        //若 mid=l+r>>1 只有两个数的时候，l 会一直=mid=0,会一直在循环中出不去
        else r=mid-1;
        // if(nums[mid]==mid)return mid;
    }
    //退出while循环时，l=r
    if (nums[l]==l)return l;
    //考虑到只有一个数的情况
    else return -1;
}

int main()
{
    //如何在不知道数组元素个数的情况下，输入一个数组？
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&q[i]);
    int res=getNumberSameAsIndex(q,n);
    printf("%d",res);
    return 0;
}