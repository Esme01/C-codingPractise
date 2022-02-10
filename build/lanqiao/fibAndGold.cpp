/*Fibonacci 数列是非常著名的数列：F[1]=1,F[2]=1，对于 i>3，F[i]=F[i−1]+F[i−2]。

Fibonacci 数列有一个特殊的性质，前一项与后一项的比值，F[i]/F[i+1]，会趋近于黄金分割。

为了验证这一性质，给定正整数 N，请你计算 F[N]/F[N+1]，并保留 8 位小数。*/
/*
输入格式
一个正整数 N。

输出格式
F[N]/F[N+1]。

答案保留 8 位小数。

数据范围
1≤N≤2×109
*/
//难点：如何保留八位小数？
//需要用到高精度除法？
// #include<iostream>
// #include<stdlib.h>
// #include<cstdio>
// using namespace std;
// int main()
// {
//     int N;
//     cin>>N;
//     int f1=1,f2=1;
//     if (N)
//     {
//         /* code */
//     }
//     int t=N/2;
//     for (int i = 1; i < t; i++)
//     {
//         f1=f1+f2;
//         f2=f1+f2;
//     }//每次前进2个数，可用于输出所有fib数列
//     printf("%.8f\n",1.0*f1/f2);
//     //用1.0来乘，把结果变成浮点数
//     return 0;
// }
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n > 20) {
        printf("0.61803399\n");
        return 0;
    }

    int a = 0;
    int b = 1;
    int c;

    while (n--) {//计算n次
        c = a + b;
        a = b;
        b = c;//b=a+b
    }
//每次前进1个数
    printf("%.8f\n", 1.0 * a / b);

    return 0;
}

