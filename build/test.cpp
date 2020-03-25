#include<iostream>
#include<queue>
#include<time.h>
using namespace std;

typedef priority_queue<int,vector<int>,greater<int>> pq;

//priorityDemo

void f1();
void f2();//子函数声明

int main()
{
    //compare比较器
    f1();
    cout<<"==============="<<endl;
    f2();

    return 0;
}

void f2(){
    pq q;
    srand(time(0));//头文件是time,设置时间种子
    for (int i = 0; i < 10; i++)
    {
        q.push(rand()%100);//随机产生十个数
    }
    while (!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
}

void f1()
{
    priority_queue<int> q;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        q.push(rand()%100);
    }
    while (!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
}