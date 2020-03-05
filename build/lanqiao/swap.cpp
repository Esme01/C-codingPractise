#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int *a,int *b)
//注意指针参数的写法
{
    int temp=*a;
    //需要声明一个临时变量
    *a=*b;
    *b=temp;
}

int main()
{
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    //指针的传递方式
    cout<<a<<" "<<b<<endl;
    return 0;
}

