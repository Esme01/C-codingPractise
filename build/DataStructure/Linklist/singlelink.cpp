//用数组模拟链表
//静态链表
#include<iostream>
using namespace std;
const int N =100010;
//head存储链表头，e[]存储节点的值，ne[]存储节点的next指针
//idx表示当前用到了哪个节点
int head,e[N],ne[N],idx;
//初始化
void init()
{
    head=-1;//NULL
    idx=0;
}

void insert(int a)//头插法
{
    e[idx]=a;
    ne[idx]=head;
    head=idx++;
}

void add(int k,int x)//在指定位置 k 插入
{
    e[idx]=x;
    ne[idx]=ne[k];
    ne[k]=idx;
    idx++;
}

//将下标是 K 的点的后面的点删掉
void remove(int k)
{
    ne[k]=ne[ne[k]];//不用idx
}
//单链表可以在O（1）的时间复杂度内找到下一个位置
//但不能找到上一个位置，需要用循环链表（或从头开始遍历）

int main()
{
    int m;
    cin>>m;

    init();
    while (m--)
    {
        int k,x;
        char op;

        cin>>op;
        if (op=='H')
        {
            cin>>x;
            insert(x);
        }
        else if (op=='D')
        {
            cin>>k;
            if(!k)head=ne[head];
            remove(k-1);
        }
        else
        {
            cin>>k>>x;
            add(k-1,x);
        }
    }
    for (int i = head; i !=-1; i=ne[i])cout<<e[i]<<" ";
    cout<<endl;

    return 0;
}



