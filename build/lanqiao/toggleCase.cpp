# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<iostream>
# define MAXN 1000+10

char s[MAXN];
using namespace std;

int main()
{
    scanf("%s",s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]>='a')s[i]=toupper(s[i]);
        else s[i]=towlower(s[i]);
        cout<<s[i];
    }
    cout<<endl;
    return 0;

    
}
