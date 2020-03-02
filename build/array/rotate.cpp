# include<iostream>
# include<stdio.h>
# include<string.h>
# define MAXN 100+10
char s[MAXN][MAXN];
char ss[MAXN][MAXN];

using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)scanf("%d",&s[i][j]);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j >= 0; j++)
        {
            ss[j][i]=s[i][n-j-1];
            cout<<ss[j][i]<<endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
           printf("%d ",ss[i][j]);
       }
       printf("\n");
    }
    

    return 0;
}