#include<cstdio>
char s[10][10];

int dir[8][2]={{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,2},{1,-2},{2,-1}};
bool f;
bool vis[10][10];
bool in(int x,int y)
{
    return 0<=x&&x<10&&0<=y&&y<9;
}
void dfs(int x,int y)//搜索函数
{
    vis[x][y]=true;
    if (f==true)
    {
        return;
    }
    
    if (s[x][y]=='T')
    {
        f=true;
        return;
    }
    
    for (int i = 0; i < 8; i++)
    {
        int tx=x+dir[i][0];
        int ty=y+dir[i][1];
        if (in(tx,ty)&&s[tx][ty]!='#'&&!vis[tx][ty])
        {
            dfs(tx,ty);
        }
    }//只求是否能找到，不求有多少，所有不需要回溯
}

int main()
{
    int x,y;
    for (int i = 0; i < 10; i++)
    {
        scanf("%s",s[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (s[i][j]=='S')
            {
                x=i;
                y=j;
            }
        }
    }
    dfs(x,y);
    if (f)
    {
        printf("YES\n");
    }
    
    return 0;
    
}