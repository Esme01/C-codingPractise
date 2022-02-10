//2022.1.10回文平方
/*回文数是指数字从前往后读和从后往前读都相同的数字。
例如数字 12321 就是典型的回文数字。
现在给定你一个整数 B，请你判断 1∼300 之间的所有整数中，有哪些整数的平方转化为 B 进制后，其 B 进制表示是回文数字。*/

/*
分析:
1. 进制转换
2. 判断回文数
*/

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

//进制转换
char get(int a)
{
    char c;
    if (a<=9)
    {
        c=a+'0';
    }
    else{
        c=a-10+'A';
    }
    return c;
}

string B(int i,int b)
{
    string num;
    while (i)
    {
        num+=get(i%b);
        i/=b;
    }
    reverse(num.begin(),num.end());
    return num;
}

bool check(string num)
{
    for (int i = 0,j=num.size()-1; i < j; i++,j--)
    {
        if (num[i]!=num[j])
            return false;
    }
    return true;
}

int main()
{
    int b;
    cin>>b;
    for (int i = 1; i <= 300; i++)
    {
        //每个数的平方都要进行 一次进制转换之后才能判断是否为回文数吗？
        //可以，因为数量级比较小
        string num;
        num=B(i*i,b);
        if (check(num))
            cout<<B(i,b)<<' '<<B(i*i,b)<<endl;
    }
    return 0;
}


