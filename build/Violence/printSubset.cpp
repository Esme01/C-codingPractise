#include<iostream>
#include<algorithm>

using namespace std;
void print_subset(int n,int s)
{
    for (int i = 0; i < n; i++)
    //把数字转换成其在二进制表中对应的位置
        if (s&(1<<i))cout<<i<<" ";
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i <(1<<n) ; i++)
    //n个数一共有2^n个子集
    {
        print_subset(n,i);
    }
    return 0;
}