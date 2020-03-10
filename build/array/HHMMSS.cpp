#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 100
using namespace std;
/**
 * 学会sscanf正则表达式的用法
*/
char s[MAXN];
int main()
{
    char HH[2],MM[2],SS[2];
    int hh,mm,ss;
    fgets(s,sizeof(s),stdin);
    sscanf(s,"%[^:]:%[^:]:%2s",HH,MM,SS);
    hh=atoi(HH);
    mm=atoi(MM);
    ss=atoi(SS);//把字符变成数字
    printf("%d %d %d\n",hh,mm,ss);
    return 0;
}
