# include<iostream>
# include<stdio.h>
# include<string.h>

using namespace std;

int main()
{
    char s[20],a[10],b[10];
    int middle,x=0,y=0;
    fgets(s,sizeof(s),stdin);//允许行首末尾均有空格
    for (int i = 0; i < sizeof(s); i++)
    {
        if (s[i]=='+'||s[i]=='-'||s[i]=='*')middle=i;
    }

    for (int i = 0; i < middle; i++)
    {
        if (s[i]==' ')continue;
        x=x*10+(s[i]-'0');
    }
    cout<<x<<endl;

    for (int i = middle+1; i < strlen(s)-1; i++)
    //strlen(s)-1 才是正确的
    {
        if (s[i]==' ')continue;
        y=y*10+(s[i]-'0');
    }
    cout<<y<<endl;

    switch(s[middle])
    {
      case '+':
           printf("%d\n", x+y);break;
      case '-':
           printf("%d\n", x-y);break;
      case '*':
           printf("%d\n", x*y);break;
     }

    /**
     * 通过选择合适的输入方法将问题简化
     * 
    */
    // int a,b,c; 
    // char f;      
    // scanf("%d",&a);     
    // scanf("%c",&f);  
    // while((f!='+')&&(f!='-')&&(f!='*'))
    //    scanf("%c",&f);    
    // 若是输入的一直都不是运算符号，就会一直输入
    //    scanf("%d",&b); 
    //    if (f=='+') c=a+b;  
    //    else  if(f=='-') c=a-b; 
    //    else    c=a*b;      
    // printf("%d",c); 
    // return 0;
    return 0;
}