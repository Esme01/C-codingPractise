#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//atoi()
#include<string.h>
#define MAXN 100+10
using namespace std;

/**
 * 只用fgets函数读入一个整数。
 * 假设它占据单独一行，读到行末为止，包括换行符。
 * 输入保证读入的整数可以保存在int中。
*/
char s[MAXN];
int main()
{
    int num=0;
   fgets(s,sizeof(s),stdin);
    // for(int i=0;i<strlen(s);i++)
    // {
    //     num=num*10+(s[i]-'0');
    // }
    num=atoi(s);
    printf("%d\n",num);
   return 0; 
}
