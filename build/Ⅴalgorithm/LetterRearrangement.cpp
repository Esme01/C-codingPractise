#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int n;
char word[2000][10],sorted[2000][10];
//字符比较函数
//const void* 是qsort（）方法的写法
int cmp_char(const void* _a,const void* _b)
{
    char* a=(char*)_a;
    char* b=(char*)_b;
    return *a-*b;//表示返回由小到大的顺序
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
    n=0;
    for(;;)
    {
        scanf("%s",word[n]);
        if(word[n][0]=='*')break;//一遇到结束标志就终止循环，只用看第一个‘*’
        n++;
    }
    qsort(word,n,sizeof(word[0]),cmp_string);//给所有单词排序,按照首字母排序
    for (int i = 0; i < n; i++)
    {
        strcpy(sorted[i],word[i]);
        qsort(sorted[i],strlen(sorted[i]),sizeof(char),cmp_char);
        //给每个单词排序
    }
    char s[10];
    while (scanf("%s",s)==1) //持续读取到文件结尾
    {
        qsort(s,strlen(s),sizeof(char),cmp_char); //给输入单词排序
        int found=0;
        for(int i=0;i<n;i++)
            if(strcmp(sorted[i],s)==0)
            {
                found=1;//用一个标志来记录
                printf("%s",word[i]);//输出原始单词，而不是排序后的
            }
            if(!found)printf(":(");
            printf("\n");
    }
    return 0;
    
}



