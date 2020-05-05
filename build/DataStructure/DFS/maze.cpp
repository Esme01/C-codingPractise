#include<iostream>
#include<stdio.h>
#include<stack>
using namespace std;
//栈中元素是一个由行、列、方向组成的三元组
typedef struct 
{
    int x,y;//当前访问的迷宫格子的纵横坐标
    int di;//当前方向
}Box;

bool findPath(int maze[M+2][N+2],Direction direct[],Stack &s)
//栈中所保存的是一条迷宫通路
{
    Box temp;
    int x,y,di; //迷宫格子当前处理单元的纵横坐标和方向
    int line,col; //迷宫数组下一单元的行坐标和列坐标
    maze[1][1]=-1; //-1表示已经访问过
    temp={1,1,-1};//初始化
    s.push(temp);
    while (!s.isEmpty())//栈不为空
    {
        temp=s.pop();//"弹出"起到“回退”的作用，控制程序执行的一个必须的流程
        x=temp.x;
        y=temp.y;
        di=temp.di+1;
            while (di<4)//方向未尝试完成
            {
                line=x+direct[di].incX;
                col=y+direct[di].incY;
                if (maze[line][col]==0)//是0表示这条路是通的
                {
                    temp={x,y,di};
                    s.push(temp);//将（1，1）这个点往右方向行走的痕迹压入栈中
                    x=line;
                    y=col;
                    maze[line][col]=-1;
                    if (x==M&&y==N)
                    {
                        return true;//迷宫有路
                    }
                    else
                    {
                        di=0;
                    }
                }
                else    di++;
                
            }
    }
    return false;//迷宫没有路
}

int main()
{
    return 0;
}