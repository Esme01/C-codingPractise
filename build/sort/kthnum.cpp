/*给定一个长度为 n 的整数数列，以及一个整数 k，请用快速选择算法求出数列从小到大排序后的第 k 个数。*/
/*
    需要把整个数列都排序之后再查找第 K 个数吗？
    还是用别的方法，把前K 个数排列出来即可？
    6.29√
*/
#include <iostream>
using namespace std;
const int N = 1e6 + 10;//最大是6
int n, k;
int q[N];

void quicksort(int q[], int l, int r)
{
    //1.设定边界
    if (l >= r)
        return;
    //2.设置指针
    int x = q[(l + r) >> 1], i = l - 1, j = r + 1;
    while (i < j)
    {
        do
            i++;
        while (q[i] < x);
        do
            j--;
        while (q[j] > x);
        if (i < j)
            swap(q[i], q[j]);
    }
    quicksort(q, l, j);
    quicksort(q, j + 1, r);
}
int main()
{
    // scanf("%d %d",n,k);
    cin >> n >> k;
    // scanf("%d",k);
    for (int i = 0; i < n; i++)
        scanf("%d", &q[i]);
    quicksort(q, 0, n - 1);
    printf("%d", q[k-1]);
    return 0;
}
