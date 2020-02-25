#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 50+10
using namespace std;

/**
 * 只用getchar实现fgets的功能，
 * 即用每次一个字符的方式读取整行
 * **/

char s[MAXN];
int main()
{
    char t;
    int i=0;
    while ((t=getchar())!='\n')
    {
        s[i++]=t;
    }
    cout<<s<<endl;
    return 0; 
}
