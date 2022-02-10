#include<iostream>
// #include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
/*
const int N=110;
const int M=110;
int main()
{
    int n,m,cnt=0;
    string s;
    char p[N][M];
    cin>>n>>m;
    // vector<vector<int> > p;//二维的vector运用不熟练
    //输入基因序列，并加入二维vector数组中
    for (int i = 0; i < 2*n; i++)
    {
        cin>>s;
        for (int j = 0; j < m; j++)
        {
            p[i][j]=s[j];
        }
    }
    //双指针同步比较,以列为单位比较
    //对应位置上的基因没有交集
    for (int j=0; j < m;j++)
    {
        bool flag=0;
        for (int a = 0; a < n; a++)
        {
            for (int b = n; b < 2*n; b++)
            {
                if (p[a][j]==p[b][j])
                {
                    flag=1;
                }
            }
        }
        if(flag==0)cnt++;
    }//三重循环有点不合理
    cout<<cnt<<endl;
}*/

const int N=110;

int n,m;
char a[N][N],b[N][N];

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];//每次输入一个字符串
    for(int i=0;i<n;i++)cin>>b[i];

    string gins="ACGT";

    int res=0;
    for (int i = 0; i < m; i++)//循环枚举每一列
    {
        bool hash[4]={};//哈希表数组，初始化全为 0
        for (int j = 0; j < n; j++)
            hash[gins.find(a[j][i])]=true;//find()返回字符出现的第一个位置
        
        bool flag=true;
        for (int j = 0; j < n; j++)
        {
            if(hash[gins.find(b[j][i])]){
                flag=false;
                break;
            }
        }
        if(flag)res++;
    }
    cout<<res<<endl;
}