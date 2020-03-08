// #include<stdio.h>
// #include<string.h>
// #define MAXN 1000+10

// char s[MAXN];
// char ss[MAXN];
// int main()
// {
//     scanf("%s",s);
//     int i=0;
//     while (s[i]||s[i]!='"')i++;
//     if(s[i]=='\n')return 0;
//     memcpy(ss,s,sizeof(char)*i);
//     ss[i]='`';
//     ss[i+1]='`';
//     int j=i+1;
//     for (; s[i]; i++)ss[++j]=s[i];
//     for (int t = 0; ss[t]; t++)printf("%c ",ss[t]);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int c, q = 1;
    while((c = getchar()) != EOF)
    {
        if(c == '"')
        {
            printf("%s", q ? "``" : "''");
                q = !q;
        }
        else printf("%c", c);
    }
    return 0;
}