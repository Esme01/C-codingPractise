#include<stdio.h>
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    //需要声明一个临时变量
    //错误写法 int *t;
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

