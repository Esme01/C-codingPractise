#include<stdio.h>
#include<iostream>
#include<ctype.h>
#include<math.h>
using namespace std;

int main()
{
    char t;
    int num;
    scanf("%c",&t);
    if (isdigit(t))
    //不能直接判断整数
    {
        num=atoi(t)%1000;
    }
    
    // else
    // {
    //     cout<<"0"<<endl;
    // }
    
    
    cout<<t<<endl;
    return 0;
}