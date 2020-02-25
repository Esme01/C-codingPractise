#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAXN 100+10
using namespace std;


/**
 * 实现strchr的功能，即在一个字符串中查找一个字符。
 * （返回字符串中第一次出现字符的位置，找不到就返回NULL）
*/
char s[MAXN];
int main()
{
    char c;
    int num=0;
    fgets(s,sizeof(s),stdin);
    scanf("%c",&c);
    for (int i = 0; i < strlen(s); i++)
    {
        if(c==s[i]){
            num=i;
            printf("%d\n",i);
            break;
        }
        else
        {
            if (i==strlen(s)-1)
            {
                printf("NULL");
            }
            
        }
        
    }
    return 0; 
}
