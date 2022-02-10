//数组去重，求数组中不同数的个数

//用逐个扫描的方法==会多减去一些数
// 1 2 3 4 5 5 6 7 7 5 7 9 0
//逐个扫描，出现有重复的数则不加

//实现unique函数：用的时候需要先排序

#include<iostream>
using namespace std;
int isOne(int *s,int n)//形参是整个数组
{
    int res=0;
    for (int i = 0; i < n; i++)
    {
        bool flag=true;
         for (int j = i+1; j < n; j++)
             if (s[i]==s[j]) flag=false;
        if (flag==true)res++;
    }
    return res;
}

int main()
{
    int s[1001]={0};
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    cout<<isOne(s,n)<<endl;
    return 0;
}
