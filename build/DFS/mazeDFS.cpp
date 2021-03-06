#include<iostream>
#include<string.h>
using namespace std;
int n,m;//设置界限
string maze[110];//字符串数组
bool vis[110][110];
//全局变量数组

int dir[4][2]={{-1,0},{0,-1},{1,0},{0,1}};

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
    maze[x][y]='m';//标注迷宫路径

    for (int i = 0; i < 4; i++)
    {
        int tx=x+dir[i][0];
        int ty=y+dir[i][1];
        if (in(tx,ty)&&maze[tx][ty]!='*'&&!vis[tx][ty])
        {
            if (dfs(tx,ty))
            {
                return true;
            }
        }
    }
    vis[x][y]=0;//回退
    maze[x][y]='.';
    return false;

    
    // int tx=x-1,ty=y;//向上走
    // if (in(tx,ty)&&maze[tx][ty]!='*'&&!vis[tx][ty])
    // {
    //     if (dfs(tx,ty))
    //     {
    //         return true;
    //     }
    // }
    // tx=x,ty=y-1;
    // if (in(tx,ty)&&maze[tx][ty]!='*'&&!vis[tx][ty])
    // {
    //     if(dfs(tx,ty))
    //     {
    //         return true;
    //     }
    // }
    // tx=x+1,ty=y;
    // if (in(tx,ty)&&maze[tx][ty]!='*'&&!vis[tx][ty])
    // {
    //    if (dfs(tx,ty))
    //    {
    //        return true;
    //    }
    // }

    // tx=x,ty=y+1;
    //    if (in(tx,ty)&&maze[tx][ty]!='*'&&!vis[tx][ty])
    // {
    //    if (dfs(tx,ty))
    //    {
    //        return true;
    //    }
    // }
    
    // vis[x][y]=0;
    // maze[x][y]='.';
    // return false;
  
}

//在MAIN函数里面找到迷宫的起点
int main()
{
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>maze[i];
    }
    int x,y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (maze[i][j]=='S')//找到起点
            {
                x=i,y=j;
            }
        }
    }
    if (dfs(x,y))//从起点开始DFS
    {
        for (int i = 0; i < n; i++)
        {
            cout<<maze[i]<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
    
    
}