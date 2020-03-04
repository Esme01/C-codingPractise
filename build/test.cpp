# include<stdio.h>
# include<ctype.h>
# include<iostream>
# include<string.h>
# define MAXN 1000+10

using namespace std;

char s[MAXN][MAXN],ss[MAXN][MAXN];
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>s[n-j-1][i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}