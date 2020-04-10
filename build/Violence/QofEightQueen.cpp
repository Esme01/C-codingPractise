#include<iostream>
#include<stdio.h>
using namespace std;
bool flag[7]={true,true,true,true,true,true,true};
int place[7]={0,0,0,0,0,0,0};
bool d1[7]={true,true,true,true,true,true,true};
bool d2[7]={true,true,true,true,true,true,true};
int tot=0;
//因为这些数组需要在子函数之间调用，设置全局变量有利于调用
void generate(int n);

int main()
{
    generate(0);
    return 0;
}

void generate(int n)
{
    int i;
    for (i = 0; i < 8; i++)
    {
       // cout<<place[i]<<endl;
        if (flag[i]&&d1[n-i+7]&&d2[n+i])
        {
            place[n]=i;
            flag[i]=false;
            d1[n-i+7]=false;
            d2[n+i]=false;
            if (n<7)
                generate(n+1);
            else
            {
                tot++;
                cout<<tot<<endl;
                for (int j = 0;j < 8; j++)
                {
                    cout<<place[i]<<" ";
                }
                cout<<endl;
            }
            //回溯，考虑其他的可行方案（在递归返回之后）
            flag[i]=true;
            d1[n-i+7]=true;
            d2[n+i]=true;
            //place不用修改，因为会覆盖掉
        }
    }
    
}

