/**
 * 因为要输出原句子
 * 所以要用多一个数组来存储预处理数组中字符在原句子中的位置
 * 简化程序:
 * 枚举回文串的“中间”位置i,
 * 然后不断往外扩展，直到有字符不同。
 * **/
# include<stdio.h>
# include<string.h>
# include<ctype.h>
# define MAXN 5000+10
char buf[MAXN],s[MAXN];
int p[MAXN];
//用p[i]保存s[i]在buf中的位置
int main()
{
    int n,m=0,max=0,x,y;
    int i,j;
    fgets(buf,sizeof(s),stdin);
    n=strlen(buf);
    for ( i = 0; i < n; i++)
        if (isalpha(buf[i]))
        {
            p[m]=i;
            s[m++]=toupper(buf[i]);
        }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; i-j >=0&&i+j<m; j++)
        {
            if (s[i-j]!=s[i+j])break;
            if(j*2+1>max)
            {
                max=j*2+1;
                x=p[i-j];
                y=p[i+j];
            }
        }
        for ( j = 0; i-j >=0&&i-j+1<m; j++)
        {
            if (s[i-j]!=s[i-j+1])break;
            if(j*2+2>max){max=j*2+2;x=p[i-j];y=p[i+j+1];}
        }
    }
    for ( i = x; i <= y; i++)
        printf("%c",buf[i]);
    printf("\n");
    return 0;
}