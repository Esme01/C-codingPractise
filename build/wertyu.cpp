#include<stdio.h>

char *s="`1234567890-=qwertyuiop[]\asdfghjkl;'zxcvbnm,./";
//注意声明字符串的形式

int main()
{
    int c,i;//字符也是特殊的整型
    while ((c=getchar())!=EOF)
    {
        for (i = 0; s[i]&&s[i]!=c; i++);
        if(s[i])putchar(s[i-1]);
        else putchar(c);
    }
    return 0;
}