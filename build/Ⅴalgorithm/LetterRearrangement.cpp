#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int n;
char word[2000][10],sorted[2000][10];
//字符比较函数
int cmp_char(const void* _a,const void* _b)
{
    char* a=(char*)_a;
    char* b=(char*)_b;
    return *a-*b;//字符比较直接相减
}

//字符串比较函数
int cmp_string(const void* _a,const void* _b)
{
    char* a=(char*)_a;
    char* b=(char*)_b;
    return strcmp(a,b);//字符串比较需要用函数
}

int main()
{
    
}



