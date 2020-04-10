#include<iostream>
#include<stdio.h>
bool flag[7]={true,true,true,true,true,true,true};
int place[7]={0};
bool d1[7]={true,true,true,true,true,true,true};
bool d2[7]={true,true,true,true,true,true,true};
//因为这些数组需要在子函数之间调用，设置全局变量有利于调用
void print();
void generate(int n);

int main()
{
    generate(0);
    return 0;
}

void generate(int n)
{
    int col=0;
    for (int i = 0; i < 8; i++)
    {
        if (flag[i]&&d1[n-i+7]&&d2[n+i])
        {
            flag[i]=false;
            d1[n-i+7]=false;
            d2[n+i]=false;
            if (n<7)
            generate(n+1);
            else
            {
                print();
                break;
            }
        }
        
        
        
        
    }
    
}



