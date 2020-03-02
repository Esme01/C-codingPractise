# include<iostream>
# include<stdio.h>
# include<string.h>
# define MAXN 100+10
char s[MAXN];

using namespace std;
int main()
{
    int a,b,c; 
    char f;      
    scanf("%d",&a);     
    scanf("%c",&f);  
    while((f!='+')&&(f!='-')&&(f!='*'))
       scanf("%c",&f);     
       scanf("%d",&b); 
       if (f=='+') c=a+b;  
       else  if(f=='-') c=a-b; 
       else    c=a*b;      
    printf("%d",c); 
    return 0;
}