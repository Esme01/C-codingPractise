#include <stdio.h>
#include <stdlib.h>
#define MAX 1000+10
char a[MAX];
int main(void)
{
  int i,m;
  char c;
  for(i=0;i<MAX;i++)
  {
    if((c=getchar())!='\n') 
      a[i]=c; 
    else 
    {
      a[i]='\n';
      //为什么是0？
      break;
    }
  }
  m=atoi(a);
  //把字符数组变成整数
  printf("%d\n",m);
  return 0;
}