#include<iostream>
#include<string.h>
using namespace std;
int n,m;//设置界限
string maze[110];
bool vis[110][110];
bool in(int x,int y)
{
    //查看是否还在界限之内
    return 0<=x&&x<n&&0<=y&&y<m;
}


bool dfs(int x,int y)
{
    if (maze[x][y]=='T')
    {
        return true;
    }
    vis[x][y]=1;
    maze[x][y]=m;//标注迷宫路径
    int tx=x-1,ty=y;//向上走
    if (in(tx,ty)&&maze[tx][ty]!='*'&&)
    {
        if (dfs(tx,ty))
        {
            return true;
        }
    }
    tx=x,ty=y-1;
    if (in(tx,ty)&&maze[tx][ty]!='*'&&!vis[tx][ty])
    {
        if(dfs(tx,ty))
        {
            return true;
        }
    }
    tx=x+1,ty=y;
    if (in(tx,ty)&&maze[tx][ty]!='*'&&!vis[tx][ty])
    {
       if (dfs(tx,ty))
       {
           return true;
       }
    }

    tx=x,ty=y+1;
       if (in(tx,ty)&&maze[tx][ty]!='*'&&!vis[tx][ty])
    {
       if (dfs(tx,ty))
       {
           return true;
       }
    }
    
    vis[x][y]=0;
    maze[x][y]='.';
    return false;
  
}