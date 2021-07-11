#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define NM 600
#define LM 256
using namespace std;

//这回一定要创建二维数组

int main()
{
    int n, L, r, t, mean,meancnt=0;//meancnt存放较暗区域的像素总数
    cin >> n >> L >> r >> t;
    int a[NM][NM] = {0}; //存放矩阵

    //input
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            cin >> a[j][k];
        }
    }
    int b, c, d, e;
//count-----------------------------------------------------------------
    for (int i = 0; i < n; i++)
    {
        for (int p = 0; p < n; p++)
        {
            //递推每一个元素
            //里面再用两层循环，就是四层循环，时间复杂度是n^4
            mean=0;//平均值初始化
            int sum=0;
            /* 矩阵在中间的情况 */ 
            b = i - r;
            c = p - r;
            d = i + r;
            e = p + r;

            /* 矩阵在边界的情况 */
            if (b<0) b=0;
            if (c<0) c=0;
            if (d>=n) d=n-1;
            if (e>=n) e=n-1;
            int R1=d-b+1;//R不能一概而论
            int R2=e-c+1;
            // cout<<"d"<<d<<endl;
            // cout<<"b"<<b<<endl;
            // cout<<R1<<endl;
            // cout<<R2<<endl;
            
            for (; b <= d; b++)
            {
                c = p - r;
                if (c<0) c=0;
                //二重循环里面的 for 的初始化要注意，不要在外层循环外面赋值
                for (; c <= e; c++)
                {
                    sum+=a[b][c];
                }
            }

            // cout<<"sum: "<<sum<<endl;
            mean=sum/(R1*R2);
            //注意小数点，这里得到的全是整数
            
            //没有考虑到边界的矩阵值
            //边界矩阵的计算个数也不一样
            // cout<<"mean: "<<mean<<endl;
            if (mean<=t)
            {
                meancnt++;
            }
            // cout<<"meancnt: "<<meancnt<<endl;
        }
    }
    cout<<meancnt<<endl;
    return 0;
}