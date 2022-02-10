//ACWING模板题
#include<iostream>
using namespace std;
const int N=1e6 + 10;//100w ;const 有只读特性
int n;
int q[N];
//在最开始设定好变量
//快排在面试的时候用，比赛几乎不用
/*复习打卡
6.27
6.28
*/

/*伪代码
void quick_sort(操作的数组，值的范围l，r)
{
    判断边界，给出递归出口  
    确定一个数x，确定指针i，j
    while(i<j)
    {
        若满足条件，指针向中间移动
        交换两指针所指向的数
    }
    中间数两端递归进行
}
*/

void quick_sort(int q[],int l,int r)
{
    if (l>=r)return;
     // 判边界，只有一个数或者没有数就return
    int x=q[(r+l)>>1],i=l-1,j=r+1;
    //由于边界问题，所以x=q[l]。i=l-1,j=r+1;而不是i=l,j=r
    //x取左端的值，当测试用例是升序数列时，测试超时
    //之后每走一步都要往中间走一步，所以要提前把指针往两边放

    /* 通常认为a<<1比a*2更快，
    因为前者是更底层一些的操作。
    因此程序中乘以2的操作尽量用左移一位来代替 */
    while (i<j)
    {
        do i++;while (q[i]<x);
        do j--;while (q[j]>x);
        if (i<j)swap(q[i],q[j]);
    }
    quick_sort(q,l,j);//quick_sort(q,l,i-1)
    quick_sort(q,j+1,r);//quick_sort(q,i,r)

    //换成 i 会有区间边界问题
}

int main(){
    //注意scanf的地址符
    scanf("%d",&n);
    for (int i = 0; i < n; i++)scanf("%d",&q[i]);
    //scanf输入要比cin好，速度快
    quick_sort(q,0,n-1);//会直接修改数组q[]的值
    for (int i = 0; i < n; i++)printf("%d ",q[i]);
    return 0;
}