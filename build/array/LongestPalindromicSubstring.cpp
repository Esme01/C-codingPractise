#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#define MAXN 5000+10
char s[MAXN],buf[MAXN];
using namespace std;

int main()
{
    //之前做的题都是判断一个字符串是否是回文
    //这道题却是在一个字符串中找到最长的回文
    //scanf("%s",s);
    int n,m=0,max=0;
    int i,j,k;
    fgets(buf,sizeof(s),stdin);
    //stdin标准流输入
    //因为输入的字串可能包含空格和TAB键，所以要用合适的输入法
    n=strlen(buf);
    for ( i = 0; i < n; i++)
        if (isalpha(buf[i]))s[m++]=toupper(buf[i]);
        //m为字符串长度
    //字符串预处理
    for ( i = 0; i < m; i++)
    {
        /* code */
        for ( j = i; j < m; i++)
        {
            /* code */
            int ok=1;
            for ( k = i; k <=j; k++)
                if (s[k]!=s[j+i-k])ok=0;
            if (ok && j-i+1>max)max=j-i+1;
        }
    }
    printf("max=%d\n",max);
    return 0; 
}
